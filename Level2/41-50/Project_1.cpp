#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enGameChoice
{
    Rock = 1,
    Paper = 2,
    Scissors = 3
};
enum enWinner
{
    Player1 = 1,
    Computer = 2,
    Draw = 3
};

struct stRoundInfo
{
    short RoundsNumber = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName;
};

struct stGameResult
{
    short GameRounds = 0;
    short Player1WinTimes = 0;
    short ComputerWinTimes = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName = "";
};

// Utility Functions
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

string Tabs(short NumberOfTabs)
{
    string t = "";
    for (int i = 1; i <= NumberOfTabs; i++)
    {
        t += "\t";
    }
    return t;
}

// User Input Functions
short ReadNumberOfRounds()
{
    short RoundsNumber = 0;
    cout << "How Many Rounds 1 to 10? \n";
    cin >> RoundsNumber;
    cout << "\n";
    return RoundsNumber;
}

enGameChoice ReadPlayer1Choice()
{
    short Player1Choice = 0;
    do
    {
        cout << "Your Choice: [1]:Rock, [2]:Paper, [3]:Scissors ? ";
        cin >> Player1Choice;
    } while (Player1Choice < 1 || Player1Choice > 3);
    return (enGameChoice)Player1Choice;
}

enGameChoice GetComputerChoice()
{
    return (enGameChoice)RandomNumber(1, 3);
}

// Game Logic Functions
enWinner WhoWonTheRound(stRoundInfo RoundInfo)
{
    if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
        return enWinner::Draw;

    switch (RoundInfo.Player1Choice)
    {
    case enGameChoice::Rock:
        if (RoundInfo.ComputerChoice == enGameChoice::Paper)
            return enWinner::Computer;
    case enGameChoice::Paper:
        if (RoundInfo.ComputerChoice == enGameChoice::Scissors)
            return enWinner::Computer;
    case enGameChoice::Scissors:
        if (RoundInfo.ComputerChoice == enGameChoice::Rock)
            return enWinner::Computer;
    }
    return enWinner::Player1;
}

enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes)
{
    if (Player1WinTimes > ComputerWinTimes)
        return enWinner::Player1;
    else if (ComputerWinTimes > Player1WinTimes)
        return enWinner::Computer;
    else
        return enWinner::Draw;
}

// Display Functions
string ChoiceName(enGameChoice GameChoice)
{
    string arrChoiceName[3] = {"Rock", "Paper", "Scissors"};
    return arrChoiceName[GameChoice - 1];
}

string WinnerName(enWinner Winner)
{
    string arrWinnerName[3] = {"Player1", "Computer", "No Winner"};
    return arrWinnerName[Winner - 1];
}

void SetWinnerScreenColor(enWinner Winner)
{
    if (Winner == enWinner::Computer)
    {
        system("color 4F");
        cout << "\a";
    }
    else if (Winner == enWinner::Player1)
    {
        system("color 2F");
    }
    else
    {
        system("color 6F");
    }
}

void ShowGameOverScreen()
{
    cout << Tabs(2) << "_______________________________________________\n\n";
    cout << Tabs(2) << "              +++ G a m e  O v e r +++\n";
    cout << Tabs(2) << "_______________________________________________\n\n";
}

void ShowFinalGameResult(stGameResult GameResult)
{
    cout << Tabs(2) << "____________________[Game Result]_______________\n\n";
    cout << Tabs(2) << "Game Rounds        :" << GameResult.GameRounds << endl;
    cout << Tabs(2) << "Player1 Won Times  :" << GameResult.Player1WinTimes << endl;
    cout << Tabs(2) << "Computer Won Times :" << GameResult.ComputerWinTimes << endl;
    cout << Tabs(2) << "Draw Times         :" << GameResult.DrawTimes << endl;
    cout << Tabs(2) << "Final Winner       :" << GameResult.WinnerName << endl;
    cout << Tabs(2) << "_________________________________________________" << endl;
}

void PrintRoundResult(stRoundInfo RoundInfo)
{
    cout << "\n___________________Round" << RoundInfo.RoundsNumber << "___________________\n";
    cout << "\nPlayer1 Choice: " << ChoiceName(RoundInfo.Player1Choice);
    cout << "\nComputer Choice: " << ChoiceName(RoundInfo.ComputerChoice);
    cout << "\nRound Winner: " << RoundInfo.WinnerName << "\n";
    cout << "\n______________________________________\n"
         << endl;
}

// Main Game Function
stGameResult PlayGame(short GameRounds)
{
    stRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;
    for (int i = 1; i <= GameRounds; i++)
    {
        cout << "\nRound [" << i << "] begins: \n";
        RoundInfo.RoundsNumber = GameRounds;
        RoundInfo.Player1Choice = ReadPlayer1Choice();
        RoundInfo.ComputerChoice = GetComputerChoice();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        SetWinnerScreenColor(RoundInfo.Winner);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

        if (RoundInfo.Winner == enWinner::Player1)
            Player1WinTimes++;
        else if (RoundInfo.Winner == enWinner::Computer)
            ComputerWinTimes++;
        else
            DrawTimes++;

        PrintRoundResult(RoundInfo);
    }
    return {GameRounds, Player1WinTimes, ComputerWinTimes, DrawTimes,
            WhoWonTheGame(Player1WinTimes, ComputerWinTimes),
            WinnerName(WhoWonTheGame(Player1WinTimes, ComputerWinTimes))};
}

void StartGame()
{
    char PlayAgain = 'y';
    do
    {
        system("cls");
        stGameResult GameResult = PlayGame(ReadNumberOfRounds());
        ShowGameOverScreen();
        ShowFinalGameResult(GameResult);
        cout << endl;

        cout << "\nDo You Want To Play Again? (Y/N): ";
        cin >> PlayAgain;

    } while (PlayAgain == 'y' || PlayAgain == 'Y');
}

int main()
{
    srand((unsigned)time(NULL));
    StartGame();
}
