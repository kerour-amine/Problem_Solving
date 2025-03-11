#include <iostream>
using namespace std;
enum enDaysOfWeek
{
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7
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
enDaysOfWeek ReadDayOfWeek()
{
    return (enDaysOfWeek)ReadNumberInRange("Please enter number between 1 and 7: ", 1, 7);
}
string GetDayOfWeek(enDaysOfWeek DaysOfWeek)
{
    switch (DaysOfWeek)
    {
    case enDaysOfWeek::Sunday:
        return "Sunday";
        break;
    case enDaysOfWeek::Monday:
        return "Monday";
        break;
    case enDaysOfWeek::Tuesday:
        return "Tuesday";
        break;
    case enDaysOfWeek::Wednesday:
        return "Wednesday";
        break;
    case enDaysOfWeek::Thursday:
        return "Thursday";
        break;
    case enDaysOfWeek::Friday:
        return "Friday";
        break;
    case enDaysOfWeek::Saturday:
        return "Saturday";
        break;
    default:
        return "Wrong Day";
    }
}
int main()
{
    cout << GetDayOfWeek(ReadDayOfWeek());
    return 0;
}
