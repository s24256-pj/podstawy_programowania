#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;

    do{
    cout << "Podaj piersza licze" << endl;
    cin >> a;
    cout << "Podaj druga licze" << endl;
    cin >> b;
    cout << "Podaj licze, przez ktora liczby z przedzialu maja byc podzielne" << endl;
    cin >> c;

    if(a==b){
    cout << "Liczby musza byc rozne od siebie" << endl;
    }
    }
    while(a==b);

    if (b>a)
    {
        e=b;
        d=a;
    }
    else
    {
        e=a;
        d=b;
    }

    for (int i=d;d<e;d++)
    {
        if(d%c==0){
        cout << d << endl;
        }
    }
    return 0;
}

