#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    short Number;

    do
    {
        cout << message;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillArrayWithRandomNumbers(int Arr[100], int arrLength)
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

int FindNumberPositionInArray(int Arr[100], int arrLength, int Number)
{

    for (int i = 0; i < arrLength; i++)
    {
        if (Arr[i] == Number)
        {
            return i;
        }
    }
    return -1;
}

bool IsNumberInArray(int Arr[100], int arrLength, int Number)
{
    return FindNumberPositionInArray(Arr, arrLength, Number) != -1;
}

int main()
{
    int Arr[100];

    int arrLength = ReadPositiveNumber("Enter length of the array: ");
    FillArrayWithRandomNumbers(Arr, arrLength);

    cout << "\nArray 1 elements: \n";
    PrintArray(Arr, arrLength);

    int Number = ReadPositiveNumber("\nEnter a number to search for: ");
    cout << "\nNumber you are looking for is: " << Number << "\n";

    if (IsNumberInArray(Arr, arrLength, Number))
        cout << "Yes, the number is found ";
    else
        cout << "No, the number not found";

    return 0;
}