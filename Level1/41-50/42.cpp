#include <iostream>
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
stTaskDuration ReadTaskDuration()
{
    stTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Enter number of days: ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Enter number of hours: ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Enter number of minutes: ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Enter number of seconds: ");
    return TaskDuration;
}
int TaskDurationInSecondes(stTaskDuration TaskDuration)
{

    int DurationInSecons = 0;
    DurationInSecons = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSecons += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSecons += TaskDuration.NumberOfMinutes * 60;
    DurationInSecons += TaskDuration.NumberOfSeconds;

    return DurationInSecons;
}
int main()
{

    cout << TaskDurationInSecondes(ReadTaskDuration());

    return 0;
}
