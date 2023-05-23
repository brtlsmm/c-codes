// Sortowanie kątowe.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define pkt pair <int , int>
pair <int, int> start;

bool compare(pair <int, int> punkt1, pair <int, int> punkt2)
{
	if ((punkt1.second - start.second) * (punkt2.first - start.first) == (punkt1.first - start.first) * (punkt2.second - start.second))
	return punkt1.first < punkt2.first;
	
    return (punkt1.second - start.second) * (punkt2.first - start.first) < (punkt1.first - start.first) * (punkt2.second - start.second);
}



int main()
{
    //pair <int, int> start;
    int n;

    cout << "Punkt centralny: ";
    cin >> start.first >> start.second;

    cout << "Ile punktow: ";
    cin >> n;

    vector <pair<int, int>> punkty;

    for (int i = 0; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        //cin >> punkty[n].first >> punkty[n].second;
        punkty.push_back(make_pair(x, y));
    }
    
    sort(punkty.begin(), punkty.end(), compare);

    cout << "\nWynik sortowania: \n";
    
    for (int i = 0; i < punkty.size(); i++)
        cout << punkty[i].first << ' ' << punkty[i].second << endl;

    return 0;
}
