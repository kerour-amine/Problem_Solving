#include <iostream>
using namespace std;

enum enOddOrEven
{
    Odd = 1,
    Even = 2
};

int ReadNumber()
{
    int Number;
    cout << "Please enter a number: ";
    cin >> Number;
    return Number;
}

enOddOrEven CheckOddOrEven(int N)
{
    if ((N % 2) != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int SumOddNumbersFrom1ToN_ForLoop(int N)
{
    int sum = 0;

    for (int counter = 1; counter <= N; counter++)
    {
        if (CheckOddOrEven(counter) == enOddOrEven::Even)
        {
            sum += counter;
        }
    }
    return sum;
}
int main()
{
    cout << SumOddNumbersFrom1ToN_ForLoop(ReadNumber()) << endl;
    return 0;
}