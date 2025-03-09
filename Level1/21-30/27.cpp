#include <iostream>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "Please enter a number: ";
    cin >> Number;
    return Number;
}
void PrintRangeFromNTo1_WhileLoop(int N)
{
    int c = N;
    cout << "Range printed using while statment: " << endl;
    while (c >= 1)
    {
        cout << c << endl;
        c--;
    }
}
void PrintRangeFromNTo1_DoWhileLoop(int N)
{
    int c = N;
    cout << "Range printed using do while statment: " << endl;
    do
    {
        cout << c << endl;
        c--;
    } while (c >= 1);
}
void PrintRangeFromNTo1_ForLoop(int N)
{
    cout << "Range printed using for statment:" << endl;

    for (int i = N; i >= 1; i--)
    {
        cout << i << endl;
    }
}
int main()
{
    int N = ReadNumber();

    PrintRangeFromNTo1_ForLoop(N);
    PrintRangeFromNTo1_WhileLoop(N);
    PrintRangeFromNTo1_DoWhileLoop(N);

    return 0;
}