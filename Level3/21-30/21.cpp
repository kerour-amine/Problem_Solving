#include <iostream>
using namespace std;

void PrintFibonacciSerieMeth1(short Number)
{
    int Prev2 = 0, Prev1 = 1, Temp;
    for (short i = 0; i < Number; i++)
    {
        cout << Prev1 << "   ";
        Temp = Prev2;
        Prev2 = Prev1;
        Prev1 += Temp;
    }
}

void PrintFibonacciSerieMeth2(short Number)
{
    int FebNumber = 0;
    int Prev2 = 0, Prev1 = 1;

    cout << "1   ";

    for (short i = 2; i <= Number; i++)
    {
        FebNumber = Prev2 + Prev1;
        cout << FebNumber << "   ";
        Prev2 = Prev1;
        Prev1 = FebNumber;
    }
}
int main()
{
    PrintFibonacciSerieMeth1(10);
    cout << endl;
    PrintFibonacciSerieMeth2(10);
}