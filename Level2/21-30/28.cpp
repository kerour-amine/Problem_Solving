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

void CopyArray(int ArrSource[100], int ArrDestination[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        ArrDestination[i] = ArrSource[i];
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
    srand((unsigned)time(NULL));

    int Arr[100], arrLength;

    FillArrayWithRandomNumbers(Arr, arrLength);

    int Arr2[100];
    CopyArray(Arr, Arr2, arrLength);

    cout << "\nArray 1 Elements: \n";
    PrintArray(Arr, arrLength);
    cout << endl;

    cout << "\nArray 2 Elements after copy: \n";
    PrintArray(Arr2, arrLength);
    cout << endl;

    return 0;
}
