#include <iostream>
using namespace std;

void FillArray(int Arr[100], int &arrLength)
{

    arrLength = 6;
    Arr[0] = 10;
    Arr[1] = 20;
    Arr[2] = 30;
    Arr[3] = 30;
    Arr[4] = 20;
    Arr[5] = 10;
}

void PrintArray(int Arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}

bool IsPalindromeArray(int Arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (Arr[i] != Arr[arrLength - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    int Arr[100], arrLength = 0;

    FillArray(Arr, arrLength);

    cout << "\nArray Elements: \n";
    PrintArray(Arr, arrLength);

    if (IsPalindromeArray(Arr, arrLength))
        cout << "\nYes Array Is Palindrom\n";
    else
        cout << "\nNo Array Is Not Palindrom\n";

    return 0;
}