#include <iostream>
using namespace std;

float ReadNumber()
{
    int Number;
    cout << "\nEnter a number: ";
    cin >> Number;
    return Number;
}

float Myabs(int Number)
{
    if (Number < 0)
        return -Number;
    else
        return Number;
}

int main()
{

    float Number = ReadNumber();

    cout << "Myabs Result: ";
    cout << Myabs(Number) << "\n";

    cout << "C++ abs Result: ";
    cout << abs(Number) << "\n";

    return 0;
}