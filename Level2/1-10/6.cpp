#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int Number;

    do
    {
        cout << message;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int SumOfDigits(int Number)
{
    int Remainder=0,Sum=0;
    while(Number>0){
        Remainder=Number%10;
        Number=Number/10;
        Sum=Sum+Remainder;
    }
    return Sum;
}

int main()
{
    int Sum=SumOfDigits(ReadPositiveNumber("Please enter positive numebr: "));
    cout<<"\nSum Of Digits = "<<Sum<<endl;
    
    return 0;
}