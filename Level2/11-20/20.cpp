#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

enum enCharType
{
    CapitalLetter = 1,
    SmallLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

char GetRandonCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
        break;
    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));
        break;
    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));
        break;
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
        break;
    default:
        return 0;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandonCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandonCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandonCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandonCharacter(enCharType::Digit) << endl;

    return 0;
}