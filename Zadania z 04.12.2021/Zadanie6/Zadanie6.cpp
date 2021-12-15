#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void full(int n, int tab[]){
    for(int i=0; i<n; i++){
        tab[i] = rand()%10;
    }
}

void show(int &n, int tab[]){
    for(int i=0; i<n; i++){
        cout << tab[i] << " ";
    }
    cout<<endl;
}

int skalarny(int n,int X[], int Y[]){
    int wynik = X[n-2]*Y[n-2]+X[n-1]+Y[n-1];

    return wynik;
}


int main()
{
    int A[15];
    int B[15];
    int q,p,n;

    cout << "Podaj wymiar wektora A: "<< endl;
    cin >> q;

    cout << "Podaj wymiar wektora B: "<< endl;
    cin >> p;

    full(q,A);
    show(q,A);

    full(p,B);
    show(p,B);

    cout << "Podaj n: "<< endl;
    cin >> n;

    cout << skalarny(n,A,B) << endl;

    return 0;
}
