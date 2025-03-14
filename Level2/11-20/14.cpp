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

void PrintInvertedLetterPattern(int Number)
{
    for (int i = (65 + Number) - 1; i >= 65; i--)
    {

        for (int j = i; j >= 65; j--)
        {
            cout << char(i);
        }
        cout << "\n";
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("Please enter positive number: "));
    return 0;
}