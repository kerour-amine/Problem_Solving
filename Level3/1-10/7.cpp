#include <iostream>
#include <iomanip>
using namespace std;

void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
{
    short Counter = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = ++Counter;
        }
    }
}

void TransposedMatrix(int arr[3][3], int arrTransposed[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arrTransposed[j][i] = arr[i][j];
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

    int arr[3][3];
    int arrTransposed[3][3];
    FillMatrixWithOrderedNumbers(arr, 3, 3);

    cout << "The following is 3x3 ordered matrix:" << endl;
    PrintMatrix(arr, 3, 3);

    TransposedMatrix(arr, arrTransposed, 3, 3);

    cout << "\nThe following is the transposed matrix:" << endl;
    PrintMatrix(arrTransposed, 3, 3);
}