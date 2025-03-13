#include <iostream>
using namespace std;
enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

int ReadPositiveNumber(string message)
{
    int Number;

    do
    {
        cout << message;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

enPrimeNotPrime CheckPrime(int Number)
{
    int M = Number / 2;
    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout << "\nPrime Numbers from 1 to " << Number << " :\n";
    for (int i = 1; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
            cout << i << endl;
    }
    cout << endl;
}

int main()
{
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter positive number: "));
    return 0;
}