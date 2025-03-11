#include <iostream>
using namespace std;
enum enOperationType
{
    Addition = '+',
    Substraction = '-',
    Multiplication = '*',
    Devision = '/'
};
float ReadNumber(string message)
{
    float Number = 0;
    cout << message;
    cin >> Number;

    return Number;
}
enOperationType ReadOpType()
{
    char OT = '+';
    cout << "Enter operation type: (+,-,*,/): ";
    cin >> OT;
    return (enOperationType)OT;
}
int CalculateOperation(int num1, int num2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Addition:
        return num1 + num2;
    case enOperationType::Substraction:
        return num1 - num2;
    case enOperationType::Multiplication:
        return num1 * num2;
    case enOperationType::Devision:
        return num1 / num2;
    default:
        return num1 + num2;
    }
}
int main()
{
    float num1 = ReadNumber("Enter the first number: ");
    float num2 = ReadNumber("Enter the second number: ");
    enOperationType OpType = ReadOpType();
    cout << endl
         << "Result = " << CalculateOperation(num1, num2, OpType);
    return 0;
}