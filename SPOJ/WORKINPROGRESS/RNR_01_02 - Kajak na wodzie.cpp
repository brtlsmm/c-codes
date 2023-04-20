// RNR_01_02 - Kajak na wodzie.cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        string text;
        string ans;
        bool ok = 0;
        getline(cin, text);

        if (text.length() == 2)
        {
            ans = text[1] + text;
        }
        else
        {
            if (text.length() % 2 == 0)
            {
                for (int k = 0; k < text.length(); k++)
                {
                    if (text[k] == text[text.length() - k])
                    {
                        bool ok = 1;
                    }
                }
            }
            else
            {
                for (int m = 0; m < (text.length() / 2); m++)
                {
                    if (text[m] == text[text.length() - m])
                    {
                         ok = 1;
                    }
                    else  ok = 0;
                    
                }
                if (ok == 1)
                {
                    text.resize
                    for (int x = text.length() / 2; x < text.length(); x++)
                    {
                        text[x]
                    }
                }
                
            }
            
        }

        cout << ans;
    }

}

