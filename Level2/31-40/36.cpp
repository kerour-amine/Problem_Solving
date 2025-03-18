#include <iostream>
using namespace std;

int ReadNumber()
{
    short Number;

    cout << "\nPlease enter a number: ";
    cin >> Number;
    return Number;
}

void AddArrayElement(int Number, int Arr[100], int &arrLength)
{
    arrLength++;
    Arr[arrLength - 1] = Number;
}

void InputUserNumbersInArray(int Arr[100], int &arrLength)
{
    bool AddMore = true;

    do
    {
        AddArrayElement(ReadNumber(), Arr, arrLength);
        cout << "Do you want to add more numbers? [Yes]:1,[No]:0 : ";
        cin >> AddMore;
    } while (AddMore);
}

void PrintArray(int Arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int Arr[100];
    int arrLength = 0;

    InputUserNumbersInArray(Arr, arrLength);

    cout << "\nArray Length: " << arrLength << "\n";
    cout << "Array Elements: ";
    PrintArray(Arr, arrLength);

    return 0;
}