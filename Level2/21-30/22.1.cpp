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
    cout << "Enter number of elements: ";
    cin >> arrLength;
    cout << "\nEnter Array Elements: \n";

    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
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

int TimesRepeated(int NumberToCheck, int Arr[100], int arrLength)
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (Arr[i] == NumberToCheck)
            counter++;
    }
    return counter;
}

int main()
{
    int Arr[100], arrLength, NumberToCheck;

    ReadArray(Arr, arrLength);
    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");
    cout << "\nOrigin Array: ";
    PrintArray(Arr, arrLength);
    cout << endl;
    cout << NumberToCheck << " is Repeated " << TimesRepeated(NumberToCheck, Arr, arrLength) << " time(s)";
    return 0;
}
