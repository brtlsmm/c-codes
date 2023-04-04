#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Testy: ";
    int t;
    cin >> t;

    for (int x = 0; x < t; x++)
    {
        int wersy;
        string tekst;

        cout << "ile wersow: ";
        cin >> wersy;
        for (int w = 0; w <= wersy; w++)
        {
            string str;
            getline(cin, str);
            tekst.append(str);
        }

        int ans[52];

        for (int i = 0; i < 26; i++)
        {
            int num = 0;
            int num2 = 0;
            
            for (char ch : tekst)
            {
                if (ch == char(i + 97))
                {
                    num++;
                    ans[i] = num;
                }
                if (ch == char(i + 65))
                {
                    num2++;
                    ans[i + 26] = num2;
                }
            }
        }

        for (int k = 0; k < 52; k++)
        {
            if (ans[k] > 0)
            {
                if (k < 26)
                {
                    cout << char(k + 97) << "\t" << ans[k] << endl;
                }
                else
                {
                    cout << char((k-26) + 65) << "\t" << ans[k] << endl; 
                }
            }
        }

        for (int k = 0; k < 52; k++) { ans[k] = 0; }
        cout << endl;
    }
}

