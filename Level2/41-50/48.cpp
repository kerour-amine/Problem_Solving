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

int MyFloor(int Number)
{
    if (Number > 0)
        return int(Number);
    else
        return int(Number) - 1;
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