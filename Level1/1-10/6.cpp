#include<iostream>
using namespace std;

struct stInfo{
    string firstname;
    string lastname;
};
stInfo ReadInfo(){
          stInfo Info;
   cout<<"Enter your first name: ";
   cin>>Info.firstname;
   cout<<"Enter your last name: ";
   cin>>Info.lastname;
   return Info;                
}
   
string GetFullName(stInfo Info){
    string FullName="";
    FullName = Info.firstname + " " + Info.lastname;
    return FullName;
}

void PrintFullName(string FullName){ 
    cout<<"Your full name is: "<<FullName;
}
int main(){
    PrintFullName(GetFullName(ReadInfo()));
}