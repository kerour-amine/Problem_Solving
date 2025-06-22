#include <iostream>
using namespace std;

void PrintFibonacciSerieUsingRecursion1(short Number, int Prev2, int Prev1)
{
    int Temp;
    if (Number > 0)
    {
        cout << Prev1 << "   ";
        Temp = Prev2;
        Prev2 = Prev1;
        Prev1 += Temp;
        PrintFibonacciSerieUsingRecursion1(Number - 1, Prev2, Prev1);
    }
}

void PrintFibonacciSerieUsingRecursion2(short Number, int Prev2, int Prev1)
{

    int FibNumber = 0;
    if (Number > 0)
    {

        FibNumber = Prev1 + Prev2;
        Prev2 = Prev1;
        Prev1 = FibNumber;
        cout << FibNumber << "   ";

        PrintFibonacciSerieUsingRecursion2(Number - 1, Prev2, Prev1);
    }
}
int main()
{

    PrintFibonacciSerieUsingRecursion1(10, 0, 1);
    cout << "\n";
    PrintFibonacciSerieUsingRecursion2(10, 1, 0);
}