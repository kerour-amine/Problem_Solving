#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);
    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}

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

void CopyOnlyPrimeNumebrs(int ArrSource[100], int ArrDestination[100], int arrLength, int &arrLength2)
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(ArrSource[i]) == enPrimeNotPrime::Prime)
        {
            ArrDestination[counter] = ArrSource[i];
            counter++;
        }
    }
    arrLength2 = --counter;
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

    int Arr2[100], arrLength2 = 0;
    CopyOnlyPrimeNumebrs(Arr, Arr2, arrLength, arrLength2);

    cout << "\nArray 1 Elements: \n";
    PrintArray(Arr, arrLength);
    cout << endl;

    cout << "\nArray 2 Elements after copy: \n";
    PrintArray(Arr2, arrLength2);
    cout << endl;

    return 0;
}
