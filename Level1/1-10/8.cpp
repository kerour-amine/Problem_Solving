#include <iostream>
using namespace std;

enum enPassFail
{
    Pass = 1,
    Fail = 2
};

float ReadMark()
{
    float Mark;
    cout << "Enter your mark: ";
    cin >> Mark;
    return Mark;
}
enPassFail CheckMark(float Mark)
{
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}
void PrintResult(float Mark)
{
    if ((CheckMark(Mark)) == enPassFail::Pass)
        cout << "\n You Passed";
    else
        cout << "\n You Failed";
}
int main()
{
    PrintResult(ReadMark());
    return 0;
}