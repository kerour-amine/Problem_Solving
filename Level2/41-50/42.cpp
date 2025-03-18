#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum;
    randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &arrLength)
{
    cout << "Enter number of elements: ";
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

int CountOddNumbers(int Arr[100], int arrLength)
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (Arr[i] % 2 != 0)
            counter++;
    }
    return counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], arrLength = 0;

    FillArrayWithRandomNumbers(Arr, arrLength);

    cout << "\nArray Elements: \n";
    PrintArray(Arr, arrLength);

    cout << "\nOdd Numbers Count is: ";
    cout << OddNumbersInArray(Arr, arrLength) << endl;

    return 0;
}