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
        Arr[i] = RandomNumber(-100, 100);
    }
}

void PrintArray(int Arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}

int CountNegativeNumbers(int Arr[100], int arrLength)
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (Arr[i] < 0)
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

    cout << "\nNegative Numbers Count is: ";
    cout << CountNegativeNumbers(Arr, arrLength) << endl;

    return 0;
}