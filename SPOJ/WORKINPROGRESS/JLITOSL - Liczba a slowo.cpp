// JLITOSL - Liczba na słowo
// by brtlsm
#include <iostream>
#include <string>
#include <math.h>
#include <map>

using namespace std;

const map < int, string > liczby_slownie = 
{
    { 0, "" }, { 1, " jeden" }, { 2, " dwa" }, { 3, " trzy" }, { 4, " cztery" }, { 5, " piec" },
    { 6, " szesc" }, { 7, " siedem" }, { 8, " osiem" }, { 9, " dziewiec" }, { 10, " dziesiec" },
    { 11, " jedenascie" }, { 12, " dwanascie" }, { 13, " trzynascie" }, { 14, " czternascie" }, { 15, " pietnascie" },
    { 16, " szesnascie" }, { 17, " siedemnascie" }, { 18, " osiemnascie" }, { 19, " dziewietnascie" },
    { 20, " dwadziescia" }, { 30, " trzydziesci" }, { 40, " czterdziesci" }, { 50, " piecdziesiat" },
    { 60, " szescdziesiat" }, { 70, " siedemdziesiat" }, { 80, " osiemdziesiat" }, { 90, " dziewiecdziesiat" },
    { 100, " sto" }, { 200, " dwiescie" }, { 300, " trzysta" }, { 400, " czterysta" }, { 500, " piecset" },
    { 600, " szescset" }, { 700, " siedemset" }, { 800, " osiemset" }, { 900, " dziewiecset" }
};

const string mod[5] = { "", " tys.", " mln.", " mld.", " bln." };

int main()
{
    long long num;
    cin >> num;
    string ans = "";

    int end = 0; 

    if (num == 0) ans = "zero";

    while (num > 0)
    {
        end = num % 10;
        num /= 10

        if ()

    }

}
