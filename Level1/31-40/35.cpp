#include <iostream>
using namespace std;
struct stPiggyBankContent
{
    int pernnies;
    int nickles;
    int dimes;
    int quarters;
    int dollars;
};
stPiggyBankContent ReadPiggyBankcontent()
{
    stPiggyBankContent PiggyBankContent;
    cout << "Enter number of pennies: ";
    cin >> PiggyBankContent.pernnies;
    cout << "Enter number of nickles: ";
    cin >> PiggyBankContent.nickles;
    cout << "Enter number of dimes: ";
    cin >> PiggyBankContent.dimes;
    cout << "Enter number of quarters: ";
    cin >> PiggyBankContent.quarters;
    cout << "Enter number of dollars: ";
    cin >> PiggyBankContent.dollars;
    return PiggyBankContent;
}
int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    int TotalPennies = PiggyBankContent.pernnies + PiggyBankContent.nickles * 5 + PiggyBankContent.dimes * 10 
    + PiggyBankContent.quarters * 25 + PiggyBankContent.dollars * 100;
    return TotalPennies;
}
int main()
{

    int TotalPennies = CalculateTotalPennies(ReadPiggyBankcontent());
    cout << "Total pennies: " << TotalPennies << endl;
    cout << "Total dollars: " << (float)TotalPennies / 100 << endl;
    return 0;
}