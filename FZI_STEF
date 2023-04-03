#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "Liczba koncertow: ";
	int n, zysk;
	cin >> n;

	int suma = 0, max = 0;

	while (n--)
	{
		cin >> zysk;

		suma += zysk;

		if (suma > max)
		{
			max = suma;
		}
		if (suma < 0)
		{
			suma = 0;
		}
	}
	cout << "Maksymalny zysk: " << max << endl;
}
