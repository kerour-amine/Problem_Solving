#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{
    float Number = 0;
    do
    {
        cout << message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
float TotalMonths(float LoanAmount, float MonthlyPayment)
{
    return LoanAmount / MonthlyPayment;
}
int main()
{
    float LoanAmount = ReadPositiveNumber("Enter Loan Amount: ");
    float MonthlyPayment = ReadPositiveNumber("Enter Monthly Payment: ");
    cout << "\nTotal Months To Pay: " << TotalMonths(LoanAmount, MonthlyPayment);
    return 0;
}