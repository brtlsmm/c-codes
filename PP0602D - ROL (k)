#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Podaj ile liczb; o ile przesunac: ";
    int n, k;
    vector <int> arr;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int cyfra;
        cin >> cyfra;
        arr.push_back(cyfra);
    }

    for (int j = 0; j < k; j++)
    {
        for (int x = 0; x < n-1; x++)
        {
            swap(arr[x], arr[x+1]);
        }
    }

    for (int m = 0; m < n; m++)
    {
        cout << arr[m] << "\t";
    }
}
