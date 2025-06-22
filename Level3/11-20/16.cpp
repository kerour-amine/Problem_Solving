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

short CountNumberInMatrix(int Matrix[3][3], short Rows, short Cols, int NumberToCount)
{
    short NumberCount = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == NumberToCount)
                NumberCount++;
        }
    }
    return NumberCount;
}

bool IsSparseMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short MatrixSize = Rows * Cols;
    return (CountNumberInMatrix(Matrix, 3, 3, 0) > (MatrixSize / 2));
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3] = {
        {0, 1, 5},
        {0, 0, 1},
        {0, 0, 2}};

    cout << "\nMatrix:\n";
    PrintMatrix(Matrix, 3, 3);

    if (IsSparseMatrix(Matrix, 3, 3))
        cout << "\nYes: it is sparse.";
    else
        cout << "\nNo: it is NOT sparse.";

    return 0;
}