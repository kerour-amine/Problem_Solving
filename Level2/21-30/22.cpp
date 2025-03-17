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

void ReadArray(int Arr[100], int &arrLength)
{
    cout << "Enter Number Of Elements: ";
    cin >> arrLength;

    cout << "Enter Arry Elements: \n";

    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element[" << i + 1 << "] : ";
        cin >> Arr[i];
    }
}

void PrintArray(int Arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}

int TimesRepeated(int Arr[100], int arrLength, int NumberToCheck)
{
    int counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (Arr[i] == NumberToCheck)
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    int Arr[100], arrLength, NumberToCheck;

    ReadArray(Arr, arrLength);
    NumberToCheck = ReadPositiveNumber("Enter The Number You Want To check: ");

    cout << "\nOriginal Array: ";
    PrintArray(Arr, arrLength);

    cout << "\nNumber " << NumberToCheck
         << " is repeated "
         << TimesRepeated(Arr, arrLength, NumberToCheck) << " time(s)\n";

    return 0;
}