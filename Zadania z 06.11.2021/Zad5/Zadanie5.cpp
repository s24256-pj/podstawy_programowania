#include <iostream>

using namespace std;

float dodac(float x, float y)
        {
            double wynik = x + y;
            cout << "Wynik dodawania to: " << endl;
            return wynik;
        }

float odjac(float x, float y)
        {
            double wynik = x - y;
            cout << "Wynik odejmowania to: " << endl;
            return wynik;
        }

float dziel(float x, float y)
        {
            while(y==0){
            cout << "Nie mozna dzielic przez zero, podaj inna liczbe" << endl;
            cin >> y;
            }
            double wynik = x / y;
            cout << "Wynik dzielenie to: " << endl;
            return wynik;
        }

float mnoz(float x, float y)
        {
            double wynik = x * y;
            cout << "Wynik mnozenia to: " << endl;
            return wynik;
        }



int main()
{
    float x;
    float y;
    int z;
    float wynik;

    cout << "Podaj pierwsza liczbe" << endl;
    cin >> x;
    cout << "Podaj druga liczbe" << endl;
    cin >> y;
    cout << "Wybierz dzialanie 1.dodawanie, 2.odejmowanie, 3.dzielenie, 4.mnozenie" << endl;
    cin >> z;
    while (z<1 || z > 4){
        cout << "Wybierz liczbe od 1 do 4" << endl;
        cout << "Wybierz dzialanie 1.dodawanie, 2.odejmowanie, 3.dzielenie, 4.mnozenie" << endl;
        cin >> z;
    }

    switch(z)
        {

    case 1:
        cout << dodac(x,y) << endl;
        break;

    case 2:
        cout << odjac(x,y) << endl;
        break;

    case 3:
        cout << dziel(x,y) << endl;
        break;

    case 4:
        cout << mnoz(x,y) << endl;
        break;

}
    return 0;
}
