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

int MyCeil(int Number)
{
    if (abs(GetFractionPart(Number)) > 0)
        if (Number > 0)
            return int(Number) + 1;
        else
            return int(Number);
    else
        return Number;
}

int main()
{

    float Number = ReadNumber();

    cout << "MyCeil Result: ";
    cout << MyCeil(Number) << "\n";

    cout << "C++ ceil Result: ";
    cout << ceil(Number) << "\n";

    return 0;
}