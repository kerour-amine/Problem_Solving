#include <iostream>
using namespace std;

void ReadNumbers(float &num1, float &num2, float &num3)
{
    float num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
}
float CalculateSum(float num1, float num2, float num3)
{
    return num1 + num2 + num3;
}
void PrintResult(float Total)
{
    cout << "The total sum of numbers is: " << Total;
}
int main()
{
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintResult(CalculateSum(num1, num2, num3));
    return 0;
}