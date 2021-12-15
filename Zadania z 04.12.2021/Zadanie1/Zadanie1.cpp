#include <iostream>

using namespace std;

int iloczynA(int a,int b){
    return a*b;
}

int iloczynB(){
    int a;
    int b;

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;

    return a*b;
}

void iloczynC(int a,int b){
    cout << "Wynik mnozenia to: " << a*b << endl;
}

void iloczynD(){
    int a;
    int b;

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    cout << "Wynik mnozenia to: " << a*b << endl;
}


int main()
{
    cout << "Wynik mnozenia to: " << iloczynA(2,3) << endl;
    cout << "Wynik mnozenia to: " << iloczynB() << endl;
    iloczynC(2,3);
    iloczynD();
    return 0;
}

