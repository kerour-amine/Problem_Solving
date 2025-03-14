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

int PrintDigitFrequency(int Number, short Digit)
{
    int Remainder = 0, FreqCount = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        if (Remainder == Digit)
            FreqCount++;
    }
    return FreqCount;
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a number: ");
    short Digit = ReadPositiveNumber("Please enter digit: ");
    cout << "\nDigit " << Digit << " Frequency is: " << PrintDigitFrequency(Number, Digit) << " Time(s)\n"
         << endl;

    return 0;
}