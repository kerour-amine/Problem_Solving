#include <iostream>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "Please enter a number: ";
    cin >> Number;
    return Number;
}
void PrintRangeFrom1ToN_WhileLoop(int N)
{
    int c = 1;
    cout << "Range printed using while statment: " << endl;
    while (c <= N)
    {
        cout << c << endl;
        c++;
    }
}
void PrintRangeFrom1ToN_DoWhileLoop(int N)
{
    int c = 1;
    cout << "Range printed using do while statment: " << endl;
    do
    {
        cout << c << endl;
        c++;
    } while (c <= N);
}
void PrintRangeFrom1ToN_ForLoop(int N)
{
    cout << "Range printed using for statment:" << endl;

    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int N = ReadNumber();
    PrintRangeFrom1ToN_DoWhileLoop(N);
    PrintRangeFrom1ToN_ForLoop(N);
    PrintRangeFrom1ToN_WhileLoop(N);
    return 0;
}