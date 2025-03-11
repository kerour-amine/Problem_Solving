#include<iostream>
#include<string>
using namespace std;
float ReadNumber(string message)
{
    float Number = 0;
    cout << message;
    cin >> Number;

    return Number;
}
int SumOfNumbers(){
    int sum=0,Number,counter=0;
    do{
        Number=ReadNumber("Please enter number "+to_string(counter)+": ");
        if(Number ==-99)
            break;
        sum+=Number;
        counter++;
    }while (Number != -99);
    
    return sum;
}
int main(){
    float sum=SumOfNumbers();
    cout<<endl<<"Result = "<<sum<<endl;
    return 0;
}