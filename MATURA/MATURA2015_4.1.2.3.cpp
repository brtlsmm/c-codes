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

    while (!odczyt.eof())
    {
        pos++;
        odczyt >> liczba;

        if (liczba.length() > max.length())
        {
            max = liczba;
            max_pos = pos;
        }
        else if (liczba.length() == max.length())
        {
            for (int i = 0; i < liczba.length(); i++)
            {
                if (liczba[i] == '0' && max[i] != '0')
                {
                    i = liczba.length();
                }
                if (liczba[i] != '0' && max[i] == '0')
                {
                    max = liczba;
                    max_pos = pos;
                    i = liczba.length();
                }
            }
        }

       if (liczba.length() < min.length())
        {
            min = liczba;
            min_pos = pos;
        }
        else if (liczba.length() == min.length())
        {
           for (int i = 0; i < liczba.length(); i++)
           {
               if (liczba[i] != '0' && min[i] == '0')
               {
                   i = liczba.length();
               }
               if (liczba[i] == '0' && min[i] != '0')
               {
                   min = liczba;
                   min_pos = pos;
                   i = liczba.length();
               }
           }
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
    zapis << "najmniejsza liczba wraz z pozycja: " << min_pos << "\t" << endl;
    zapis << "najwieksza liczba wraz z pozycja: " << max_pos << "\t" << endl;
    cout << "kod jest ok" << endl;

}

