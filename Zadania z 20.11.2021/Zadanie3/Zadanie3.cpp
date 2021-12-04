#include<iostream>
#include<string>

using namespace std;

const int ile = 3;

string szyfruj(string tab)
{
    int t;
    char c;

    for (int i=0;i<14;i++){
         t = tab[i] + ile;
         c = tab[i];

        if (t < 65)
            tab[i] += (26 + ile);
        if (t > 90)
            tab[i] -= (26 - ile);
        else
            tab[i] += ile;
        if (c == 32)
            tab[i] = 32;
    }


    return tab;
}

int main()
{
    string imienazwisko = "MARTA SZPILKA";

    cout << "Nie zaszyfrowane dane: " << endl << imienazwisko << endl;
    cout << "Zaszyfrowane dane: " << endl << szyfruj(imienazwisko) << endl;
    getchar();
	return 0;
}


