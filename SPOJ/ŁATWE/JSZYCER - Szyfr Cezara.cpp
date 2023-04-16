// by brtlsm
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int k = 0; k < t; k++)
    {
        string str;
        getline(cin, str);
        bool data = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != ' ' && (str[i] < 65 || str[i] > 90))
            {
                data = 1;
            }
        }

        if (data == 0)
        {
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] != ' ' && str[i] <= 87)
                {
                    str[i] += 3;
                }
                if (str[i] > 87)
                {
                    int x = 90 - str[i];
                    str[i] = (char)65 + x;
                }
            }
            cout << str << endl;
        }
        else cout << "wrong data" << endl;
    }
}

