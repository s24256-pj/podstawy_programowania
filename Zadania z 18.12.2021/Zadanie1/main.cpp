#include <iostream>

using namespace std;

int main()
{
    string imienazwisko = "Marta Szpilka";
    string *wskaznik = &imienazwisko;

    cout << "Wartosc zmiennej: " << *wskaznik << endl;
    cout << "Adres zmiennej: " << wskaznik << endl;
    cout << "Rozmiar zmiennej: " << imienazwisko.length() << endl;

    cout << "Wartosc wskaznika: " << wskaznik << endl;
    cout << "Adres wskaznika: " << &wskaznik << endl;
    //cout << "Rozmiar wskaznika: " << endl; // niestety nie wiem jak wyswietlic rozmiar wskaznika stringa


    return 0;
}
