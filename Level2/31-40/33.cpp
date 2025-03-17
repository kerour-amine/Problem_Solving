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
    short arrLength;

    do
    {
        cout << message;
        cin >> arrLength;
    } while (arrLength < 0);
    return arrLength;
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

void PrintStringArray(string ArrOFKeys[100], short arrLength)
{
    cout << "\nArray Elements: \n";

    for (int i = 0; i < arrLength; i++)
    {
        cout << "Array [" << i + 1 << "] : " << ArrOFKeys[i] << "\n";
    }
    cout << "\n";
}

void FillArrayWithKeys(string ArrOfKeys[100], short arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        ArrOfKeys[i] = GenerateKey();
    }
}

int main()
{
    srand((unsigned)time(NULL));

    string ArrOfKeys[100];
    int arrLength = ReadPositiveNumber("How many keys do you want to generate: \n");

    FillArrayWithKeys(ArrOfKeys, arrLength);

    PrintStringArray(ArrOfKeys, arrLength);

    return 0;
}