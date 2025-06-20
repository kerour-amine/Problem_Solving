#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

int RowSum(int arr[3][3],short RowNumber, short Cols){
    int Sum = 0;
    for(int j=0;j<Cols;j++){
        Sum+=arr[RowNumber][j];
    }
    return Sum;
}

void PrintEachRowSum(int arr[3][3],short Rows, short Cols){
    for(int i=0;i<Rows;i++){
        cout<<"Row "<<i+1<<" Sum = "<<RowSum(arr,i,Cols)<<endl;
    }
}
int main()
{

    srand((unsigned)time(NULL));
    
    int arr[3][3];
    FillMatrixWithRandomNumbers(arr);

    cout << "The following is 3x3 random matrix:" << endl;
    PrintMatrix(arr);

    cout << "\nThe following are the sum of each row in the matrix:" << endl;
    PrintEachRowSum(arr,3,3);
}