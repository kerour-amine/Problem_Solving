#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
    float Number;
    cout << "\nEnter a number: ";
    cin >> Number;
    return Number;
}

float GetFractionPart(float Number)
{
    return Number - (int)Number;
}

float MyRound(float Number)
{

    int IntPart = (int)Number;
    float FractionPart = GetFractionPart(Number);

    if (abs(FractionPart) > 0.5)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
    {
        return IntPart;
    }
}

int main()
{

    float Number = ReadNumber();

    cout << "MyRound Result: ";
    cout << MyRound(Number) << "\n";

    cout << "C++ round Result: ";
    cout << round(Number) << "\n";

    return 0;
}