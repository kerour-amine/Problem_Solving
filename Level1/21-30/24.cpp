#include <iostream>
using namespace std;

int ReadAge()
{
    int Age;
    cout << "Enter your Age: ";
    cin >> Age;
    return Age;
}
bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}
void Printresult(int Age)
{
    if (ValidateNumberInRange(Age, 18, 45))
        cout << Age << " is a Valid Age " << endl;
    else
        cout << Age << " is Invalid Age " << endl;
}
int main()
{
    Printresult(ReadAge());
    return 0;
}