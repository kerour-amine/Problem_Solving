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

float MySqrt(int Number)
{
    if (Number > 0)
    {
        return pow(Number, 0.5);
    }
    return NAN;
}

int main()
{

    float Number = ReadNumber();

    cout << "MySqrt Result: ";
    cout << MySqrt(Number) << "\n";

    cout << "C++ sqrt Result: ";
    cout << sqrt(Number) << "\n";

    return 0;
}