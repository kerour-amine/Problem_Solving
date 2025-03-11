#include <iostream>
#include <cmath>
using namespace std;
struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
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
stTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    stTaskDuration TaskDuration;
    const int SecondsOfDay = 24 * 60 * 60;
    const int SecondsOfHour = 60 * 60;
    const int SecondsOfMinute = 60;
     int Remainder;

    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsOfDay);
    Remainder = TotalSeconds % SecondsOfDay;

    TaskDuration.NumberOfHours = floor(Remainder / SecondsOfHour);
    Remainder = Remainder % SecondsOfHour;

    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsOfMinute);
    Remainder = Remainder % SecondsOfMinute;
    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}
void PrintTaskDuration(stTaskDuration TaskDuration)
{
    cout << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":"
         << TaskDuration.NumberOfMinutes << ":" << TaskDuration.NumberOfSeconds;
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Enter Number Of Seconds: ");
    PrintTaskDuration(SecondsToTaskDuration(TotalSeconds));
    return 0;
}