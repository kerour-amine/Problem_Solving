#include <iostream>
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

int ReadNumber()
{
    int Number = 0;
    cout << "\nPlease Enter the number to look for in matrix? ";
    cin >> Number;
    return Number;
}

bool IsNumberInMatrix(int Matrix[3][3], short Rows, short Cols, int Number)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == Number)
                return true;
        }
    }
    return false;
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];
    int Number;

    FillMatrixWithRandomNumbers(Matrix, 3, 3);
    cout << "\nMatrix:\n";
    PrintMatrix(Matrix, 3, 3);

    Number = ReadNumber();

    if (IsNumberInMatrix(Matrix, 3, 3, Number))
        cout << "Yes it is there.";
    else
        cout << "No it is NOT there.";

    return 0;
}