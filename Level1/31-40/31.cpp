#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please enter number: ";
    cin >> Number;

    return Number;
}

int Powerof2_3_4(int N)
{
    int P = 1;
    for (int i = 1; i <= 3; i++)
    {
        P = N * P;
        cout << N << " power of " << i << " = " << P << endl;
    }
}

int main()
{
    Powerof2_3_4(ReadNumber());
    return 0;
}