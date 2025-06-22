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

int ReadNumberToCount()
{
    int NumberToCount = 0;
    cout << "\nEnter the number to count in matrix? ";
    cin >> NumberToCount;
    return NumberToCount;
}

short CountNumberInMatrix(int Matrix[3][3], short Rows, short Cols, int NumberToCount)
{
    short counter = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == NumberToCount)
                counter++;
        }
    }
    return counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];
    int NumberToCount;

    FillMatrixWithRandomNumbers(Matrix, 3, 3);
    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix, 3, 3);

    NumberToCount = ReadNumberToCount();
    cout << "\nNumber " << NumberToCount << " count in matrix is: " << CountNumberInMatrix(Matrix, 3, 3, NumberToCount);

    return 0;
}