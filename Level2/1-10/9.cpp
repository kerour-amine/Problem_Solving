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

int CountDigitFrequency(int Number, short Digit)
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

void PrintAllDigitsFrequency(int Number)
{
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(Number, i);
        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequency is: " << DigitFrequency
                 << " Time(s)" << endl;
        }
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a numebr: ");
    PrintAllDigitsFrequency(Number);
    return 0;
}