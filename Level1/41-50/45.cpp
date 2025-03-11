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
        break;
    case enMonths::February:
        return "February";
        break;
    case enMonths::March:
        return "March";
        break;
    case enMonths::April:
        return "April";
        break;
    case enMonths::May:
        return "May";
        break;
    case enMonths::June:
        return "June";
        break;
    case enMonths::July:
        return "July";
        break;
    case enMonths::August:
        return "August";
        break;
    case enMonths::September:
        return "September";
        break;
    case enMonths::October:
        return "October";
        break;
    case enMonths::November:
        return "November";
        break;
    case enMonths::December:
        return "December";
        break;
    default:
        return "Wrong Month";
    }
}
int main()
{
    cout << GetMonth(ReadMonth());
    return 0;
}
