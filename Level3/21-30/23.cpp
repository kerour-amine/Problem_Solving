#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Please enter your string?\n";
    getline(cin, S1);
    return S1;
}

void PrintFirstLetterOfEachWord(string S1)
{
    bool isFirstLetter = true;
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter)
        {
            cout << S1[i] << endl;
        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
}
int main()
{
    PrintFirstLetterOfEachWord(ReadString());
}