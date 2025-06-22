#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Matrix[i][j] = RandomNumber(1, 10);
        }
    }
}

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

int MinNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
    int Min = Matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] < Min)
                Min = Matrix[i][j];
        }
    }
    return Min;
}

int MaxNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
    int Max = Matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] > Max)
                Max = Matrix[i][j];
        }
    }
    return Max;
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix, 3, 3);
    cout << "\nMatrix:\n";
    PrintMatrix(Matrix, 3, 3);

    cout << "\nMinimum Number is: ";
    cout << MinNumberInMatrix(Matrix, 3, 3);

    cout << "\nMaximum Number is: ";
    cout << MaxNumberInMatrix(Matrix, 3, 3);

    return 0;
}