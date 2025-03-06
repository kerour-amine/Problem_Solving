#include <iostream>
using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo(stInfo Info)
{
    stInfo Info;
    cout << "Enter your age: \n";
    cin >> Info.Age;
    cout << "Do You have driving license ? 1:yes , 0:no\n";
    cin >> Info.HasDrivingLicense;
    return Info;
}
bool IsAccepted(stInfo Info)
{
    if ((Info.Age > 21) && (Info.HasDrivingLicense == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void PrintResult(bool Result)
{
    if (Result)
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
    
    PrintResult(IsAccepted(ReadInfo(Info)));
    return 0;
}