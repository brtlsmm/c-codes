#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void peekline(ifstream& is, string& s)
{
    streampos sp = is.tellg();
    getline(is, s);
    is.seekg(sp);
}

int binaryToDecimal(string str)
{
    long long dec_num = 0;
    int power = 0;
    long long n = str.length();

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

    peekline(odczyt, min);
    peekline(odczyt, max);

    long long min_pos = 0;
    long long max_pos = 0;
    int pos = 0;

    int tempmax = 0;
    int tempmin = 0;

    while (!odczyt.eof())
    {
        pos++;
        odczyt >> liczba;

        bool tempmaxok = 0;
        bool tempminok = 0;
        
        for (int i = 0; i < liczba.length(); i++)
        {
            while (tempmaxok == 0)
            {
                if (liczba[i] == '1')
                {
                    tempmax = i;
                    tempmaxok = 1;
                }
            }
            while (tempminok == 0)
            {
                if (liczba[i] == '1')
                {
                    tempmax = i;
                    tempmaxok = 1;
                }
            }

        }


       /*
       if (binaryToDecimal(liczba) > binaryToDecimal(max))
            {
                max = liczba;
                max_pos = pos;
            }

       if (liczba.length() < min.length())
        {
            min = liczba;
            min_pos = pos;
        }
        else if (liczba.length() == min.length())
        {
            if (binaryToDecimal(liczba) < binaryToDecimal(min))
            {
                min = liczba;
                min_pos = pos;
            }
        }
        */
        
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

