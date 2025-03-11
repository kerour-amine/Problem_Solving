#include <iostream>
using namespace std;
string ReadPinCode()
{
    string PinCode;
    cout << "Enter PIN code: ";
    cin >> PinCode;
    return PinCode;
}
bool Login()
{
    string PinCode;
    int counter = 3;
    do
    {
        counter--;
        PinCode = ReadPinCode();
        if (PinCode == "1234")
            return 1;
        else
        {
            cout << "\nwrog Pin \n";
            cout << "still " << counter << " chances: \n ";
            system("color 4F");
        }

    } while (PinCode != "1234" && counter >= 1);

    return 0;
}
int main()
{
    if (Login())
    {
        system("color 2F");
        cout << "\nYour account balance is: 7500\n";
    }
    else
    {
        cout << "Your Card Has Been Blocked";
    }
    return 0;
}
