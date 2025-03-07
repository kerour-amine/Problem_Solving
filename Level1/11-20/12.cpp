#include <iostream>
using namespace std;

void ReadNumbers(int &num1, int &num2)
{

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
}
int MaxOf2Numbers(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
void PrintResult(int num1, int num2)
{

    cout << "The max of [" << num1 << "," << num2 << "] is: " << MaxOf2Numbers(num1, num2) << endl;
}
int main()
{
    int num1, num2;
    ReadNumbers(num1, num2);
    PrintResult(num1, num2);
    return 0;
}