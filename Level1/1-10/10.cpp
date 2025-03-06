#include<iostream>
using namespace std;

void ReadMarks(int &Mark1,int &Mark2,int &Mark3){
    
    cout<<"Enter the first mark(int number): ";
    cin>>Mark1;
    cout<<"Enter the second mark(int number): ";
    cin>>Mark2;
    cout<<"Enter the third mark(int number): ";
    cin>>Mark3;
}
int SumOfMarks(int Mark1,int Mark2, int Mark3){
    return Mark1+Mark2+Mark3;
}
float CalculateMarksAverage(int Mark1,int Mark2,int Mark3){
    return (float) SumOfMarks(Mark1,Mark2,Mark3)/3;
}
void PrintResult(float Average){
    cout<<"The average of 3 marks is: "<<Average;
}
int main(){
    int Mark1,Mark2,Mark3;
    ReadMarks(Mark1, Mark2,Mark3);
    PrintResult(CalculateMarksAverage(Mark1,Mark2,Mark3));
    return 0;
}