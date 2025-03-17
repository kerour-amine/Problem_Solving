#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int arrLength;

    do
    {
        cout << message;
        cin >> arrLength;
    } while (arrLength < 0);
    return arrLength;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int &arrLength)
{

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
    cout << "\n";
}

void SumOfTowArrays(int ArrSum[100], int Arr[100], int Arr2[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        ArrSum[i] = Arr[i] + Arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], Arr2[100], ArrSum[100];

    int arrLength = ReadPositiveNumber("Enter Number of elements: ");

    FillArrayWithRandomNumbers(Arr, arrLength);
    FillArrayWithRandomNumbers(Arr2, arrLength);

    SumOfTowArrays(ArrSum, Arr, Arr2, arrLength);

    cout << "\nArray 1 Elements: \n";
    PrintArray(Arr, arrLength);

    cout << "\nArray 2 Elements: \n";
    PrintArray(Arr2, arrLength);

    cout << "\nSum of array1 and array2 elements: \n";
    PrintArray(ArrSum, arrLength);

    return 0;
}
