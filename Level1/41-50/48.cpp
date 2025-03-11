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
float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
    return (float)LoanAmount / HowManyMonths;
}
int main()
{
    float LoanAmount = ReadPositiveNumber("Enter Loan Amount: ");
    int HowManyMonths = ReadPositiveNumber("How Many Months You Need To Settle The Loan: ");
    cout << "\nTotal Amount To Pay Every Month: " << MonthlyInstallment(LoanAmount, HowManyMonths);
    return 0;
}