#include <iostream>
using namespace std;

void ReadNumbers(int &num1, int &num2, int &num3)
{

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
}
int MaxOf3Numbers(int num1, int num2, int num3)
{
    if (num1 > num2)
        if (num1 > num3)
            return num1;
        else
            return num3;
    else if (num2 > num3)
        return num2;
    else
        return num3;
}
void PrintResult(int num1, int num2, int num3)
{

    cout << "The max of [" << num1 << "," << num2 << "," << num3 << "] is: " << MaxOf3Numbers(num1, num2, num3) << endl;
}
int main()
{
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintResult(num1, num2, num3);
    return 0;
}