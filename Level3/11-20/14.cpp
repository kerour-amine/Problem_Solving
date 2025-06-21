#include <iostream>
#include <iomanip>
using namespace std;

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

bool isScalarMatrix(int Matrix[3][3], short Rows, short Cols)
{
    int FirstDiagElement = Matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if ((i == j) && Matrix[i][j] != FirstDiagElement || (i != j) && Matrix[i][j] != 0)
                return false;
        }
    }
    return true;
}

int main()
{

    srand((unsigned)time(NULL));

    int Matrix[3][3] = {
        {9, 0, 0},
        {0, 9, 0},
        {0, 0, 9}};

    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix, 3, 3);

    if (isScalarMatrix(Matrix, 3, 3))
        cout << "Yes: Matrix is Scalar.";
    else
        cout << "No: Matrix is NOT Scalar.";

    return 0;
}