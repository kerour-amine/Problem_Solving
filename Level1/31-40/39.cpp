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

float CalculateRemainder(float TotallBill, float CashPaid)
{
    return CashPaid - TotallBill;
}

int main()
{
    float TotalBill = ReadPositiveNumber("Enter the totall bill: ");
    float CashPaid = ReadPositiveNumber("Enter the cash paid: ");

    cout << endl;
    cout << "Totall Bill: " << TotalBill << endl;
    cout << "Cash Paid: " << CashPaid << endl;
    cout << "***********************\n";
    cout << "Remainder = " << CalculateRemainder(TotalBill, CashPaid);
    return 0;
}