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
    cout<<"\n";
}

int FindNumberPositionInArray(int Arr[100],int arrLength,int NumberToSearch){

    for(int i=0;i<arrLength;i++){
        if(Arr[i]==NumberToSearch){
            return i;
        }
    }
    return -1;
}

int main(){
    int Arr[100];

    int arrLength = ReadPositiveNumber("Enter length of the array: ");
    FillArrayWithRandomNumbers(Arr,arrLength);

    cout<<"\nArray 1 elements: \n";
    PrintArray(Arr,arrLength);

    int NumberToSearchFor = ReadPositiveNumber("\nEnter a number to search for: ");
    cout<<"\nNumber you are looking for is: "<<NumberToSearchFor<<"\n";
    
    short NumberPosition = FindNumberPositionInArray(Arr,arrLength,NumberToSearchFor);

    if(NumberPosition==-1)
        cout<<"The number is not found :( \n";
    else 
    {
        
        cout<<"The number found at position: "<<NumberPosition<<"\n";
        cout<<"The number found its order is: "<<NumberPosition+1<<"\n";

    }
    
    return 0;
}