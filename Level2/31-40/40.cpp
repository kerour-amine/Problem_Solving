#include <iostream>
using namespace std;

void FillArray(int Arr[100], int &arrLength)
{

    arrLength = 10;
    Arr[0] = 10;
    Arr[1] = 10;
    Arr[2] = 10;
    Arr[3] = 50;
    Arr[4] = 50;
    Arr[5] = 70;
    Arr[6] = 70;
    Arr[7] = 70;
    Arr[8] = 70;
    Arr[9] = 90;
}

void AddArrayElement(int Number, int Arr[100], int &DesinationLength)
{
    DesinationLength++;
    Arr[DesinationLength - 1] = Number;
}

short FindNumberPositionInArray(int Number, int Arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (Number == Arr[i])
            return i;
    }
    return -1;
}

bool IsNumberInArray(int Number, int Arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, Arr, arrLength) != -1;
}

void CopyDistinctNumbers(int ArrSource[100], int ArrDestination[100], int SourceLength, int &DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (!IsNumberInArray(ArrSource[i], ArrDestination, DestinationLength))
            AddArrayElement(ArrSource[i], ArrDestination, DestinationLength);
    }
}

void PrintArray(int Arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}

int main()
{
    int ArrSource[100], SourceLength = 0, ArrDestination[100], DestinationLength = 0;

    FillArray(ArrSource, SourceLength);

    cout << "\nArray 1 Elements: \n";
    PrintArray(ArrSource, SourceLength);

    CopyDistinctNumbers(ArrSource, ArrDestination, SourceLength, DestinationLength);

    cout << "\nArray 2 Distinct Elements: \n";
    PrintArray(ArrDestination, DestinationLength);

    return 0;
}
