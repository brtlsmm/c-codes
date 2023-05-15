// Igrzystka ETI - Rosnacy podciag.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr{ new int[n] {} };

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int podciag = 1, longest = 0, last;

	for (int i = 0; i < n; i++)
	{
		last = arr[i];

		for (int j = i; j < n; j++)
		{
			if (arr[j] > last)
			{
				podciag++;
				last = arr[j];
			}
		}

		if (podciag > longest) longest = podciag;
		podciag = 1;
	}

	cout << "\nlongest: " << longest;

}

