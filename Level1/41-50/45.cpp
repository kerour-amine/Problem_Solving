#include <iostream>
using namespace std;
enum enMonths
{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

float ReadNumberInRange(string message, int From, int To)
{
    float Number = 0;
    do
    {
        cout << message;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}
enMonths ReadMonth()
{
    return (enMonths)ReadNumberInRange("Please enter number between 1 and 12: ", 1, 12);
}
string GetMonth(enMonths Months)
{
    switch (Months)
    {
    case enMonths::January:
        return "January";
    case enMonths::February:
        return "February";
    case enMonths::March:
        return "March";
    case enMonths::April:
        return "April";
    case enMonths::May:
        return "May";
    case enMonths::June:
        return "June";
    case enMonths::July:
        return "July";
    case enMonths::August:
        return "August";
    case enMonths::September:
        return "September";
    case enMonths::October:
        return "October";
    case enMonths::November:
        return "November";
    case enMonths::December:
        return "December";
    default:
        return "Wrong Month";
    }
}
int main()
{
    cout << GetMonth(ReadMonth());
    return 0;
}
