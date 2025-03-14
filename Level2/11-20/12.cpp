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

void PrintInvertedNumberPattern(int Number)
{
    for (int i = Number; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}

int main()
{
    PrintInvertedNumberPattern(ReadPositiveNumber("Please enter positive number: "));
    return 0;
}