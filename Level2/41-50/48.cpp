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

int MyFloor(float Number)
{
    if (abs(GetFractionPart(Number)) > 0)
        if (Number > 0)
            return int(Number);
        else
            return int(Number) - 1;
    else
        return Number;
}

int main()
{

    float Number = ReadNumber();

    cout << "MyFloor Result: ";
    cout << MyFloor(Number) << "\n";

    cout << "C++ floor Result: ";
    cout << floor(Number) << "\n";

    return 0;
}