#include <iostream>
using namespace std;

enum enCharType
{
    CapitalLetter = 1,
    SmallLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

int ReadPositiveNumber(string message)
{
    short NumberOfKeys;

    do
    {
        cout << message;
        cin >> NumberOfKeys;
    } while (NumberOfKeys < 0);
    return NumberOfKeys;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));
    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
    default:
        return 0;
    }
}

string GenerateWord(enCharType CharType, short length)
{
    string word;
    for (int i = 1; i <= length; i++)
    {
        word = word + GetRandomCharacter(CharType);
    }
    return word;
}

string GenerateKey()
{
    string Key;
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "_";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "_";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "_";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

    return Key;
}

void GenerateKeys(short NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "] : " << GenerateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositiveNumber("Enter How Many Keys To Generate: "));
    return 0;
}