#include <algorithm>
#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  ifstream file("sygnaly.txt");
  ofstream wynik("wynik4.txt");

  vector<pair<int, string>> unikalne;

  // 4.1
  int index;

  for (int i = 1; i <= 1000; i++) {
    string slowo;
    file >> slowo;

    index = i;

    if (index % 40 == 0) {
      wynik << slowo[9];
    }

    // 4.2

    set<char> unique_chars(slowo.begin(), slowo.end());

    unikalne.push_back(make_pair(unique_chars.size(), slowo));
  }

  pair<int, string> UnikalneMax = unikalne[0];

  for (int i = 1; i < unikalne.size(); i++) {
    if (unikalne[i].first > UnikalneMax.first) {
      UnikalneMax = unikalne[i];
    }
  }
  wynik << endl;

  wynik << endl << UnikalneMax.second << "\t" << UnikalneMax.first << endl;
}
