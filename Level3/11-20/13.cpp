#include <iostream>
#include <iomanip>
using namespace std;

void FillIdentityMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j)
                Matrix[i][j] = 1;
            else
                Matrix[i][j] = 0;
        }
    }
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << Matrix[i][j] << "   ";
        }
        cout << endl;
    }
}

bool isIdentityMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if ((i == j) && (Matrix[i][j] != 1) || (i != j) && (Matrix[i][j] != 0))
                return false;
        }
    }
    return true;
}

int main()
{

    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillIdentityMatrix(Matrix, 3, 3);
    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix, 3, 3);

    if (isIdentityMatrix(Matrix, 3, 3))
        cout << "Yes: Matrix is identity.";
    else
        cout << "No: Matrix is NOT identity.";

    return 0;
}