#include <iostream>
using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, Matrix[i][j]);
        }
        cout << endl;
    }
}

bool IsPalindromMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < (Cols / 2); j++)
        {

            if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
                return false;
        }
    }
    return true;
}

int main()
{
    int Matrix[3][3] = {
        {2, 1, 2},
        {1, 5, 5},
        {7, 3, 7}};

    cout << "\nMatrix:\n";
    PrintMatrix(Matrix, 3, 3);

    if (IsPalindromMatrix(Matrix, 3, 3))
        cout << "\nYes: Matrix is Palindrome";
    else
        cout << "\nNo: Matrix is NOT Palindrome";

    return 0;
}