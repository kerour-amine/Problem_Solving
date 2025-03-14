#include <iostream>
using namespace std;

string ReadText()
{
    string Text = "";
    cout << "Please enter text: ";
    getline(cin, Text);
    return Text;
}

string EncryptText(string Text, short EncryptionKey)
{

    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text;
}

string DecryptText(string Text, short EncryptionKey)
{

    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text;
}
int main()
{
    const short Encryptionkey = 2;
    string Text = ReadText();
    string TextAfterEncryption = EncryptText(Text, Encryptionkey);
    string TextAfterDecryption = DecryptText(TextAfterEncryption, Encryptionkey);

    cout << "\nText before encryption: " << Text << endl;
    cout << "\nText after encryption: " << TextAfterEncryption << endl;
    cout << "\nText after decryption: " << TextAfterDecryption << endl
         << endl;

    return 0;
}