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

int ColSum(int arr[3][3], short ColNumber, short Rows)
{
    int Sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        Sum += arr[i][ColNumber];
    }
    return Sum;
}

void PrintEachColSum(int arr[3][3], short Rows, short Cols)
{
    for (int j = 0; j < Cols; j++)
    {
        cout << "Row " << j + 1 << " Sum = " << ColSum(arr, j, Rows) << endl;
    }
}
int main()
{

    srand((unsigned)time(NULL));

    int arr[3][3];
    FillMatrixWithRandomNumbers(arr);

    cout << "The following is 3x3 random matrix:" << endl;
    PrintMatrix(arr);

    cout << "\nThe following are the sum of each row in the matrix:" << endl;
    PrintEachColSum(arr, 3, 3);
}