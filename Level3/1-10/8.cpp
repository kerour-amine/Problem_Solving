#include <iostream>
#include <iomanip>
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

void MultiplyTwoMatrices(int arrResult[3][3], int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arrResult[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

int main()
{

    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3], arrResult[3][3];

    cout << "\nMatrix1:" << endl;
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    PrintMatrix(arr1, 3, 3);

    cout << "\nMatrix2:" << endl;
    FillMatrixWithRandomNumbers(arr2, 3, 3);
    PrintMatrix(arr2, 3, 3);

    cout << "\nResult:" << endl;
    MultiplyTwoMatrices(arrResult, arr1, arr2, 3, 3);
    PrintMatrix(arrResult, 3, 3);

    return 0;
}
