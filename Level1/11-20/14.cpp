#include<iostream>
using namespace std;

void ReadNumbers(int &num1, int &num2)
{

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
}
void PrintNumbers(int num1,int num2){
    cout<<"\nNumber 1: "<<num1<<endl;
    cout<<"Number 2: "<<num2<<endl;
    

}
void Swap2Numbers(int &num1,int &num2){
    int tmp;
    tmp=num1;
    num1=num2;
    num2=tmp;
}
int main(){
    int num1,num2;
    ReadNumbers(num1,num2);
    PrintNumbers(num1,num2);
    Swap2Numbers(num1,num2);
    PrintNumbers(num1,num2);
    return 0;
}