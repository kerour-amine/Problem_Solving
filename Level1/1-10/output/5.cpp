#include <iostream>
using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Enter your age: ";
    cin >> Info.Age;
    cout << "Do You have driving license: ";
    cin >> Info.HasDrivingLicense;
    cout << "Do you have recommendation: ";
    cin >> Info.HasRecommendation;

    return Info;
}
bool IsAccepted(stInfo Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return ((Info.Age > 21) && (Info.HasDrivingLicense));
    }
}
void PrintResult(stInfo Info)
{

    if (IsAccepted(Info))
    {
        cout << "Hired\n";
    }
    else
    {
        cout << "Rejected\n";
    }
}

int main()
{

    PrintResult(ReadInfo());
    return 0;
}