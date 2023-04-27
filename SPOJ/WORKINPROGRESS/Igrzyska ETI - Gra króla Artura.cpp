// Igrzyska ETI - Gra króla Artura.cpp

#include <iostream>

using namespace std;


int main()
{
    int n, r;
    cin >> n >> r;
    int* arr{ new int[n] {} };
        
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << "\t";
    }


    while (r)
    {
        int c, w, d;
        cin >> c >> w >> d;
        arr[c] += w;

        for (int i = 0; i < d; i++)
        {
            if (i + c > n)
            {
                arr[(i + c) - n] += w;
            }
            else arr[i + c] += w;

            if (c - i < 0)
            {
                arr[n + (c - i)] += w;
            }
            else arr[c - i] += w;
        }
        r--;
    }

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << "\t";
    }
    
}

