#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }
    }
    return Sum;
}

bool AreEqualMatrices(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{
    return (SumOfMatrix(arr1, Rows, Cols) == SumOfMatrix(arr2, Rows, Cols));
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, arr[i][j]);
        }
        cout << endl;
    }
}

int main()
{

    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3];

    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\nMatrix1:\n";
    PrintMatrix(arr1, 3, 3);

    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\nMatrix2:\n";
    PrintMatrix(arr2, 3, 3);

    if (!AreEqualMatrices(arr1, arr2, 3, 3))
        cout << "\nNo: Matrices are NOT equal.\n";
    else
        cout << "\nYes: both Matrices are equal.\n";

    return 0;
}