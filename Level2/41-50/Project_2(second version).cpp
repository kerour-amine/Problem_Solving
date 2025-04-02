#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

enum enQuestionLevel
{
    Easy = 1,
    Med = 2,
    Hard = 3,
    Mix = 4
};

enum enOperationType
{
    Add = 1,
    Sub = 2,
    Mul = 3,
    Div = 4,
    MixOp = 5
};

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

string GetOpTypeSymbol(enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return "+";
    case enOperationType::Sub:
        return "-";
    case enOperationType::Mul:
        return "x";
    case enOperationType::Div:
        return "/";
    default:
        return "Mix";
    }
}

enOperationType GetRandomOpType()
{
    return (enOperationType)RandomNumber(1, 4);
}

string GetQuestionLevelText(enQuestionLevel QuestionLevel)
{
    string arrQuestionLevel[4] = {"Easy", "Medium", "Hard", "Mix"};
    return arrQuestionLevel[QuestionLevel - 1];
}

void SetScreenColor(bool Right)
{
    if (Right)
        system("color 2F");
    else
    {
        system("color 4F");
        cout << "\a";
    }
}

int SimpleCalculator(int Number1, int Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Sub:
        return Number1 - Number2;
    case enOperationType::Mul:
        return Number1 * Number2;
    case enOperationType::Div:
        return (Number2 != 0) ? Number1 / Number2 : 0;
    default:
        return Number1 + Number2;
    }
}

struct stQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OpType;
    enQuestionLevel QuestionLevel;
    int PlayerAnswer = 0;
    int CorrectAnswer = 0;
    bool AnswerResult = false;
};

struct stQuizz
{
    stQuestion QuestionList[100];
    int NumberOfQuestions;
    enQuestionLevel QuestionsLevel;
    enOperationType OpType;
    int RightAnswers = 0;
    int WrongAnswers = 0;
    bool isPass = false;
};
stQuestion GenerateQuesiton(enQuestionLevel QuestionLevel, enOperationType OpType)
{
    stQuestion Question;

    if (QuestionLevel == enQuestionLevel::Mix)
        QuestionLevel = (enQuestionLevel)RandomNumber(1, 3);

    if (OpType == enOperationType::MixOp)
        OpType = GetRandomOpType();

    Question.OpType = OpType;

    switch (QuestionLevel)
    {
    case enQuestionLevel::Easy:
        Question.Number1 = RandomNumber(1, 10);
        Question.Number2 = RandomNumber(1, 10);
        break;
    case enQuestionLevel::Med:
        Question.Number1 = RandomNumber(10, 100);
        Question.Number2 = RandomNumber(10, 100);
        break;
    case enQuestionLevel::Hard:
        Question.Number1 = RandomNumber(100, 1000);
        Question.Number2 = RandomNumber(100, 1000);
        break;
    }
    Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OpType);
    Question.QuestionLevel = QuestionLevel;

    return Question;
}

void AskAndCorrectQuestionListAnswers(stQuizz &Quizz)
{

    for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
    {
        cout << "\nQuestion [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions << "]\n";
        cout << Quizz.QuestionList[QuestionNumber].Number1 << " "
             << GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OpType) << " "
             << Quizz.QuestionList[QuestionNumber].Number2 << " = ";

        cin >> Quizz.QuestionList[QuestionNumber].PlayerAnswer;

        if (Quizz.QuestionList[QuestionNumber].CorrectAnswer == Quizz.QuestionList[QuestionNumber].PlayerAnswer)
        {
            cout << "\nCorrect";
            Quizz.RightAnswers++;
        }
        else
        {
            cout << "Wrong! Correct Answer: " << Quizz.QuestionList[QuestionNumber].CorrectAnswer;
            Quizz.WrongAnswers++;
        }
    }
    Quizz.isPass = (Quizz.RightAnswers >= Quizz.WrongAnswers);
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
        stQuizz Quizz;
        Quizz.NumberOfQuestions = 5;
        Quizz.QuestionsLevel = enQuestionLevel::Easy;
        Quizz.OpType = enOperationType::MixOp;

        for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
        {
            Quizz.QuestionList[QuestionNumber] = GenerateQuesiton(Quizz.QuestionsLevel, Quizz.OpType);
        }
        AskAndCorrectQuestionListAnswers(Quizz);
        cout << "\nQuiz Completed! Right Answers: " << Quizz.RightAnswers
             << ", Wrong Answers: " << Quizz.WrongAnswers << "\n";

        cout << (Quizz.isPass ? "You Passed the Quiz!\n" : "You Failed the Quiz!\n");

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