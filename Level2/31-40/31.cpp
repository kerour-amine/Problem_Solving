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

void Swap(int &A, int &B)
{
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void FillArrayWith1ToN(int Arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        Arr[i] = i + 1;
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

void ShuffleArray(int Arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        int index1 = RandomNumber(1, arrLength) - 1;
        int index2 = RandomNumber(1, arrLength) - 1;

        Swap(Arr[index1], Arr[index2]);
    }
}

int main()
{

    srand((unsigned)time(NULL));

    int Arr[100];

    int arrLength = ReadPositiveNumber("Enter number of elements: \n");

    FillArrayWith1ToN(Arr, arrLength);

    cout << "\nArray elements before shuffle: \n";
    PrintArray(Arr, arrLength);

    ShuffleArray(Arr, arrLength);

    cout << "\nArray elements after shuffle: \n";
    PrintArray(Arr, arrLength);

    return 0;
}