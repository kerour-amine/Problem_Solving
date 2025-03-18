#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}
enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

enPrimeNotPrime CheckPrime(int Number)
{
    int M = Number / 2;
    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
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

void AddArrayElement(int Number, int Arr[100], int &arrLength)
{
    arrLength++;
    Arr[arrLength - 1] = Number;
}

void CopyPrimeNumbers(int ArrSource[100], int ArrDestination[100], int arrLength, int &arr2Length)
{

    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(ArrSource[i]) == enPrimeNotPrime::Prime)
            AddArrayElement(ArrSource[i], ArrDestination, arr2Length);
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

    int Arr[100], arrLength = 0, arr2Length = 0;

    FillArrayWithRandomNumbers(Arr, arrLength);

    int Arr2[100];
    CopyPrimeNumbers(Arr, Arr2, arrLength, arr2Length);

    cout << "\nArray 1 Elements: \n";
    PrintArray(Arr, arrLength);
    cout << endl;

    cout << "\nArray 2 Prime Numbers: \n";
    PrintArray(Arr2, arr2Length);
    cout << endl;

    return 0;
}
