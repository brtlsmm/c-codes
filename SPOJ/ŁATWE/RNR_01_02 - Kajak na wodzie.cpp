#include <iostream>
#include <string>
#include <algorithm> // equal

using namespace std;

bool is_palindrome(string s) {
    return equal(s.begin(), s.end(), s.rbegin());
}

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        bool found = false;

        for (int i = 0; i <= s.size(); i++) 
        {
            for (char ch = 'a'; ch <= 'z'; ch++) 
            {
                string s2 = s;
                s2.insert(i, 1, ch);
                if (is_palindrome(s2)) 
                {
                    cout << s2 << endl;
                    found = true;
                    break;
                }
                if (found) break;
            }
        }
   
        if (!found) {
            cout << "NIE" << endl;
        }
    }
    return 0;
}
