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
        // gdzie c to numer rycerza, który wygrał; d to liczba sąsiadów po obu stronach, którzy otrzymują punkty; w to liczba punktów które otrzymują.
        cin >> c >> w >> d;
        int pos = c - 1;
        int* checkarr{ new int[n] {} };
        
        if (checkarr[pos] == 0)
        {
            arr[pos] += w;
            checkarr[pos]++;
        }


        for (int i = 1; i <= d; i++)
        {
            if (i + c > n)
            {
                if (checkarr[(i + pos) - n] == 0)
                {
                    arr[(i + pos) - n] += w;
                    checkarr[(i + pos) - n]++;
                }
            }
            else
            {
                if (checkarr[i + pos] == 0)
                {
                    arr[i + pos] += w;
                    checkarr[i + pos]++;
                }
            }
                

            if (c - i <= 0)
            {
                if (checkarr[n + (pos - i)] == 0)
                {
                    arr[n + (pos - i)] += w;
                    checkarr[n + (pos - i)]++;
                }
                
            }
            else
            {
                if (checkarr[pos - i] == 0)
                {
                    arr[pos - i] += w;
                    checkarr[pos - i]++;
                }
            }    
        }

        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << "\t";
        }

        r--;
    }

    
}

