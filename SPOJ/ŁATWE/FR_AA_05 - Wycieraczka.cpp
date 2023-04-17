// FR_AA_05 - Wycieraczka.cpp 

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int wymiar, n, radious, coordinate1, coordinate2, count = 0;
    cin >> wymiar >> radious >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> coordinate1 >> coordinate2;

        double range = sqrt(pow(coordinate1 - wymiar, 2) + pow(coordinate2, 2));

        if (range > radious) count++;
    }

    cout << "\nliczba insektow ktore nie zostaly usuniete: " << count << endl;
}
