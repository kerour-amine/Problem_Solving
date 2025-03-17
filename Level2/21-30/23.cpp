#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &arrLength)
{
    cout << "\nEnter Number Of Elements: ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        Arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int Arr[100], int arrLength)
{
    cout << "\nArray Elements: ";

    for (int i = 0; i < arrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], arrLength;

    FillArrayWithRandomNumbers(Arr, arrLength);
    PrintArray(Arr, arrLength);

    return 0;
}
