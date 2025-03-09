#include <iostream>
using namespace std;
int ReadNumberInReange(int From, int To)
{
    int Grade;
    do
    {
        cout << "Please enter grade between " << From << " and " << To << " : ";
        cin >> Grade;
    } while (Grade < From || Grade > To);

    return Grade;
}
char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
}
void PrintGrade(char Grade)
{
    cout << "Your Grade is: " << Grade;
}
int main()
{
    PrintGrade(GetGradeLetter(ReadNumberInReange(0, 100)));
    return 0;
}