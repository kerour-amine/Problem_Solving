#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please enter number: ";
    cin >> Number;
    return Number;
}
int ReadPower()
{
    int Power;
    cout << "Enter the power: ";
    cin >> Power;
    return Power;
}

int NPowerofM(int Number, int Power)
{
    if (Power == 0)
        return 1;
    int P = 1;
    for (int i = 1; i <= Power; i++)
    {
        P = Number * P;
    }
    return P;
}

int main()
{
    cout << NPowerofM(ReadPower(), ReadNumber());
    return 0;
}