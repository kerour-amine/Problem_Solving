#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

int ColumSum(int arr[3][3], short ColNumber, short Rows)
{
    int Sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        Sum += arr[i][ColNumber];
    }
    return Sum;
}

void FillArrayWithColSum(int arrSum[3], int arr[3][3], short Rows, short Cols)
{

    for (int j = 0; j < Cols; j++)
    {
        arrSum[j] = ColumSum(arr, j, Rows);
    }
}
void PrintEachColSum(int arrSum[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << arrSum[i] << endl;
    }
}
int main()
{

    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrSum[3];
    FillMatrixWithRandomNumbers(arr);

    cout << "The following is 3x3 random matrix:" << endl;
    PrintMatrix(arr);

    FillArrayWithColSum(arrSum, arr, 3, 3);

    cout << "\nThe following are the sum of each colum in the matrix:" << endl;
    PrintEachColSum(arrSum);
}