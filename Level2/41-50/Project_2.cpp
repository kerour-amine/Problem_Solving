#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Enums for different game elements
enum enQuestionLevel
{
    Easy = 1,
    Med = 2,
    Hard = 3,
    Mix = 4
};
enum enOpType
{
    Add = 1,
    Sub = 2,
    Mul = 3,
    Div = 4,
    Mixx = 5
};
enum enGameResult
{
    Pass = 1,
    Fail = 2
};

// Structs to store question and game info
struct stQuestion
{
    int Number1;
    int Number2;
    char Op;
};

struct stGameInfo
{
    short NumberOfQuestions;
    enQuestionLevel QLevel;
    enOpType OpType;
    short RightAnswers = 0;
    short WrongAnswers = 0;
    enGameResult GameResult;
};

// Utility functions
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

int NumberGenerator(enQuestionLevel QLevel)
{
    switch (QLevel)
    {
    case Easy:
        return RandomNumber(1, 10);
    case Med:
        return RandomNumber(10, 100);
    case Hard:
        return RandomNumber(100, 1000);
    default:
        return RandomNumber(1, 10);
    }
}

char enumTochar(enOpType OpType)
{
    char Op[4] = {'+', '-', '*', '/'};
    if (OpType == Mixx)
        return Op[RandomNumber(0, 3)];
    return Op[OpType - 1];
}

string FinalResultToString(enGameResult GameResult)
{
    return (GameResult == Pass) ? "Pass" : "Fail";
}

string QuestionLevelToString(enQuestionLevel QLevel)
{
    string arrQuestionLevel[4] = {"Easy", "Medium", "Hard", "Mix"};
    return arrQuestionLevel[QLevel - 1];
}

stQuestion QuestionGenerator(enQuestionLevel QLevel, enOpType OpType)
{
    return {NumberGenerator(QLevel), NumberGenerator(QLevel), enumTochar(OpType)};
}

void PrintQuestions(short NumberOfQ, short QNumber, stQuestion Question)
{
    cout << "\n\nQuestion [" << QNumber << "/" << NumberOfQ << "]\n\n";
    cout << Question.Number1 << "\n"
         << Question.Number2 << "\t" << Question.Op << "\n\n";
    cout << "________________\n";
}

int RightAnswer(stQuestion Question)
{
    switch (Question.Op)
    {
    case '+':
        return Question.Number1 + Question.Number2;
    case '-':
        return Question.Number1 - Question.Number2;
    case '*':
        return Question.Number1 * Question.Number2;
    case '/':
        return Question.Number1 / Question.Number2;
    }
    return -1;
}

void SetColorScreen(bool Result)
{
    if (Result)
        system("color 2F");
    else
    {
        cout << "\a";
        system("color 4F");
    }
}

void PrintGameResult(stGameInfo GameInfo)
{
    cout << "\n__________________________________________\n";
    cout << "\nFinal Result is " << FinalResultToString(GameInfo.GameResult) << " : \n";
    cout << "\n__________________________________________\n";
    cout << "Number Of Questions     : " << GameInfo.NumberOfQuestions << endl;
    cout << "Questions Level         : " << QuestionLevelToString(GameInfo.QLevel) << endl;
    cout << "Operation Type          : " << enumTochar(GameInfo.OpType) << endl;
    cout << "Number Of Right Answers : " << GameInfo.RightAnswers << endl;
    cout << "Number Of Wrong Answers : " << GameInfo.WrongAnswers;
    cout << "\n__________________________________________\n\n";
}

short ReadUserInput(string message)
{
    short Number;
    cout << message;
    cin >> Number;
    return Number;
}

stGameInfo PlayGame()
{
    stGameInfo GameInfo;
    GameInfo.NumberOfQuestions = ReadUserInput("How many questions do you want to answer? ");
    GameInfo.QLevel = static_cast<enQuestionLevel>(ReadUserInput("Enter question level [1]:Easy, [2]:Med, [3]:Hard, [4]:Mix ? "));
    GameInfo.OpType = static_cast<enOpType>(ReadUserInput("Enter operation type [1]:Add, [2]:Sub, [3]:Mul, [4]:Div, [5]:Mix ? "));

    for (int i = 1; i <= GameInfo.NumberOfQuestions; i++)
    {
        stQuestion Question = QuestionGenerator(GameInfo.QLevel, GameInfo.OpType);
        PrintQuestions(GameInfo.NumberOfQuestions, i, Question);

        int Answer;
        cin >> Answer;
        int Right = RightAnswer(Question);

        if (Answer == Right)
        {
            SetColorScreen(true);
            cout << "Right Answer\n";
            GameInfo.RightAnswers++;
        }
        else
        {
            SetColorScreen(false);
            cout << "Wrong Answer\n"
                 << "The Right Answer: " << Right << "\n\n";
            GameInfo.WrongAnswers++;
        }
    }

    GameInfo.GameResult = (GameInfo.RightAnswers > GameInfo.WrongAnswers) ? Pass : Fail;
    return GameInfo;
}

void ResetScreen()
{
    system("cls");
    system("color 0F");
}
void StartGame()
{
    string PlayAgain = "Y";
    do
    {
        ResetScreen();
        stGameInfo GameInfo = PlayGame();
        PrintGameResult(GameInfo);
        cout << "Do you want to play again? (Y/N): ";
        cin >> PlayAgain;
    } while (PlayAgain == "Y" || PlayAgain == "y");
}

int main()
{
    srand(static_cast<unsigned>(time(NULL)));
    StartGame();
    return 0;
}
