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

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;
    return TotalBill;
}

int main()
{
    float TotalBill = ReadPositiveNumber("Enter Total Bill: ");

    cout << endl;
    cout << "Total Bill: " << TotalBill << endl;
    cout << "Total Bill after service fee and sales tax: " << TotalBillAfterServiceAndTax(TotalBill);
    return 0;
}
