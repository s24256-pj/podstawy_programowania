#include <iostream>

using namespace std;

struct ulamek{
    int licznik,mianownik;
    float wartosc;
};

float ulamekmnozenie(ulamek a,ulamek b){

    float ulamekc = a.wartosc*b.wartosc;

    return ulamekc;

}
int main()
{
    ulamek ul1;
    ul1.licznik = 4;
    ul1.mianownik = 5;
    ul1.wartosc = ((float)ul1.licznik/ul1.mianownik);

    ulamek ul2;
    ul2.licznik = 7;
    ul2.mianownik = 2;
    ul2.wartosc = ((float)ul2.licznik/ul2.mianownik);

    cout << "Wynik mnozenia ulamkow " << ul1.wartosc << " razy " << ul2.wartosc << " to: " << endl;
    cout << ulamekmnozenie(ul1,ul2) << endl;
    return 0;
}
