#include <iostream>

using namespace std;

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

    switch(z){

    case 1:
        wynik = x + y;
        cout << wynik << endl;
        break;
    case 2:
        wynik = x - y;
        cout << wynik << endl;
        break;
    case 3:
        while(y==0){
            cout << "Nie mozna dzielic przez 0, podaj inną liczbe" << endl;
            cin >> y;
        }
        wynik = x / y;
        cout << wynik << endl;
        break;
    case 4:
        wynik = x * y;
        cout << wynik << endl;
        break;

    }
    return 0;
}
