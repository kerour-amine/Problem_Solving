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

void PrintResult(int Number)
{
    if (isPerfectNumber(Number))
        cout << endl
             << Number << " is a perfect number\n\n";
    else
        cout << endl
             << Number << " is not a perfect number\n\n";
}

int main()
{
    PrintResult(ReadPositiveNumber("Please enter positive number: "));
    return 0;
}