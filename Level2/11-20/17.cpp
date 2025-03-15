#include <iostream>
using namespace std;

string ReadPassword()
{
    string Password = "";
    cout << "Please enter 3 letters (all capitals): ";
    cin >> Password;
    return Password;
}
bool GuessPassWord(string Password)
{
    cout << "\n";
    string word = "";
    int counter = 0;
    for (int i = 65; i <= 90; i++)
    {

        for (int j = 65; j <= 90; j++)
        {

            for (int k = 65; k <= 90; k++)
            {
                counter++;
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                cout << "Trial 1: " << word << endl;
                if (Password == word)
                {
                    cout << "Password is: " << word << endl;
                    cout << "Found after " << counter << " Trial(s)" << endl;
                    return true;
                }
                word = "";
            }
        }
    }
    return false;
}

int main()
{
    GuessPassWord(ReadPassword());
    return 0;
}