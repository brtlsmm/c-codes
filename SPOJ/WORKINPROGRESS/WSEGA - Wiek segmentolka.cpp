// WSEGA - Wiek segmentolka.cpp
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;
        if (n < 1)
        {
            cout << "wrong data " << endl;
            test--;
            break;
        }
        
        vector <int> legs;

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            if (k < 0)
            {
                cout << "wrong data " << endl;
                i--;
                break;
            }
            legs.push_back(k);
        }

        int days = 0;

        if (n == 0) cout << legs[n];
        else
        {
            for (int i = 0; i < n; i++)
            {
                if(legs[i] )
            }
        }

    }
}
