#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string html = "<html>\n<head>\n<TITLE>To jest tytul< / Title>\n< / head>\n<body>\n<b>Cos tam< / b>\n< / body>\n< / html>";
	
    for(int i = 0; i < html.length(); i++)
	{
		html[i] = toupper(html[i]);
	}

    stack <int> delimiters;

    for (int i = 0; i < html.size(); i++)
    {
        if (html[i] == '>')
        {
            delimiters.push(i);
        }

        else if (html[i] == '<' && !delimiters.empty())
        {
            int pos = delimiters.top();

            delimiters.pop();

            int length = i - 1 - pos;

            string ans = html.substr(pos + 1, length);

            for (int i = 0; i < ans.length(); i++)
            {
                ans[i] = tolower(ans[i]);
            }

            

            html.replace(pos + 1, length, ans);
        }
    }

    cout << html;
}
