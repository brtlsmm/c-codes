// KC004 - Zliczanie wystąpień.cpp

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int tofind, n, howmany = 0;
        cin >> tofind >> n;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num == tofind) howmany++;
        }
        cout << howmany << endl;
        t--;
    }
}

