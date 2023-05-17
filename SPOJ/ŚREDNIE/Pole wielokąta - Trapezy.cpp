// Pole wielokąta - Trapezy.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float* x{ new float[n] {} };
    float* y{ new float[n] {} };
    float pole = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        pole += (x[i] - x[i + 1]) * ((y[i] + y[i + 1]) / 2);
    }

    pole += (x[n - 1] - x[0]) * ((y[n - 1] + y[0]) / 2);

    if (pole < 0) pole = abs(pole);

    cout << endl << floor(pole) << endl;
}

