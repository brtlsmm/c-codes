// Sortowanie kątowe.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    pair <float, float> start;
    int n;

    cout << "Punkt centralny: ";
    cin >> start.first >> start.second;

    cout << "Ile punktow: ";
    cin >> n;

    vector <pair<float, float>> punkty;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        punkty.push_back(make_pair(x, y));
    }

    
    for (int i = 0; i < n ; i++)
    {
        for (int k = 1; k < n - 1; k++)
        {
            if ((punkty[i].second - start.second) * (punkty[k].first - start.first) > (punkty[i].first - start.first) * (punkty[k].second - start.second)) // jezeli kat jest wiekszy zmien;
            {
                swap(punkty[i].first, punkty[k].first);
                swap(punkty[i].second, punkty[k].second);

            }
            if ((punkty[i].second - start.second) * (punkty[k].first - start.first) > (punkty[i].first - start.first) * (punkty[k].second - start.second)) // jezeli kat jest wiekszy zmien;
            {
                if (punkty[i].first - start.first > punkty[k].first - start.first)
                {
                    swap(punkty[i].first, punkty[k].first);
                    swap(punkty[i].second, punkty[k].second);
                }
            }
        }
    }


    reverse(punkty.begin(), punkty.end());
    
    
    cout << "\nWynik sortowania: \n";
    
    for (int i = 0; i < punkty.size(); i++)
        cout << punkty[i].first << ' ' << punkty[i].second << endl;

    return 0;
}
