#include <iostream>
using namespace std;

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

bool isPerfectNumber(int Number)
{
    int Sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
        {
            Sum += i;
        }
    }
    return Sum == Number;
}

void PrintPerfectNumbersFrom1ToN(int Number)
{
    cout << endl
         << "Perfect numbers from 1 to " << Number << " : \n";
    for (int i = 1; i <= Number; i++)
    {
        if (isPerfectNumber(i))
            cout << i << "\n";
    }
}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please enter positive number: "));
    return 0;
}