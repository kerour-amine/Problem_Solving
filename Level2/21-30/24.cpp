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

    for (int i = 0; i < arrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}

int MaxNumberInArray(int Arr[100], int arrLength)
{

    int Max = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (Arr[i] >= Max)
            Max = Arr[i];
    }

    return Max;
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], arrLength;

    FillArrayWithRandomNumbers(Arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(Arr, arrLength);

    cout << "\nMax number is: "
         << MaxNumberInArray(Arr, arrLength) << endl;

    return 0;
}
