#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
    int Number;
    do
    {
        cout << "Please enter positive number: ";
        cin >> Number;
    } while (Number < 0);

    return Number;
}

int Factorial(int N)
{
    int Factorial = 1;
    for (int i = 1; i <= N; i++)
    {
        Factorial *= i;
    }
    return Factorial;
}

int main()
{
    cout << Factorial(ReadPositiveNumber()) << endl;
    return 0;
}