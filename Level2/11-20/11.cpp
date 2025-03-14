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

int ReverseNumber(int Number)
{
    int Remainder = 0, Number2 = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}
bool IsPalindrom(int Number)
{
    return Number == ReverseNumber(Number);
}

int main()
{
    if (IsPalindrom(ReadPositiveNumber("Enter a numebr: ")))
        cout << "\nYes, it's a palindrom number\n";
    else
        cout << "\nNo, it's not a palindrom number\n";
    return 0;
}
