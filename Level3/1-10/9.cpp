#include <iostream>
#include <string>
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

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, arr[i][j]);
            // cout<<setw(3)<<arr[i][j];
        }
        cout << endl;
    }
}

void PrintMiddleRow(int arr[3][3], short Rows, short Cols)
{
    short middRow = (Rows / 2);

    for (short j = 0; j < Cols; j++)
    {
        printf(" %0*d   ", 2, arr[middRow][j]);
    }
    cout << "\n";
}

void PrintMiddleCol(int arr[3][3], short Rows, short Cols)
{
    short middCol = (Cols / 2);

    for (short i = 0; i < Rows; i++)
    {
        printf(" %0*d   ", 2, arr[i][middCol]);
    }
    cout << "\n";
}

int main()
{

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\nMatrix:" << endl;
    PrintMatrix(arr, 3, 3);

    cout << "\nMiddle row of matrix is:" << endl;
    PrintMiddleRow(arr, 3, 3);

    cout << "\nMiddle col of matrix is:" << endl;
    PrintMiddleCol(arr, 3, 3);

    return 0;
}