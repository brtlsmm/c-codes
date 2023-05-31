#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int binaryToDecimal(string str)
{
    int dec_num = 0;
    int power = 0;
    int n = str.length();

    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == '1') {
            dec_num += (1 << power);
        }
        power++;
    }

    return dec_num;
}


int main()
{
    string liczba;
    ifstream odczyt("liczby.txt");
    ofstream zapis("wynik4.txt");
    long long jedynki = 0;
    long long podzielnosc_dwa = 0;
    long long podzielnosc_osiem = 0;
    string min;
    string max;
    string tempmin;
    long long min_pos = 0;
    long long max_pos = 0;
    int pos = 0;

   

    while (!odczyt.eof())
    {
        pos++;
        odczyt >> liczba;

        tempmin = liczba;

        if (binaryToDecimal(liczba) > binaryToDecimal(max))
        {
            max = liczba;
            max_pos = pos;
        }
        if (binaryToDecimal(liczba) < binaryToDecimal(min))
        {
            min = liczba;
            min_pos = pos;
        }
        
        long long sumzero = 0;
        long long sumone = 0;
        int check = 0;
        
        for (int i = 0; i < liczba.length(); i++)
        {
            if (liczba[i] == '0')
            {
                sumzero++;
            }

            if (liczba[i] == '1')
            {
                sumone++;
            }

            if (i >= liczba.length() - 3)
            {
                if (liczba[i] == '0') check++;
            }   
        }

        if (sumzero > sumone)
        {
            jedynki++;
        }
        
        if (liczba[liczba.length() - 1] == '0') podzielnosc_dwa++;
        if (check == 3) podzielnosc_osiem++;

        
    }
    zapis << "liczby z wieksza iloscia zer od jedynek: " << jedynki << endl;
    zapis << "liczby podzielne przez dwa: " << podzielnosc_dwa << endl;
    zapis << "liczby podzielne przez osiem: " << podzielnosc_osiem << endl;
    cout << "najmniejsza liczba wraz z pozycja: " << min_pos << "\t" << min << endl;
    cout << "najwieksza liczba wraz z pozycja: " << max_pos << "\t" << max << endl;

}

