#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    getline(cin, text);

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == char(32))
        {
            text[i + 1] = toupper(text[i + 1]);    
        } 
    }
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == char(32))
        {
            for (int k = i; k < text.length(); k++)
            {
                text[k] = text[k + 1];
            }
        }
    }
    for (int m = 0; m < text.length(); m++)
    {
        cout << (char)text[m];
    }

}
