#include <iostream>
#include <vector>

using namespace std;

void sortowanie_babelkowe(int tab[], int k){

    for (int i=0; i<k; i++){
        for (int j=0; j<k-1; j++){
            if (tab[j]>tab[j+1]){
                swap(tab[j],tab[j+1]);
        }
        }
    }
}
int main()
{
    int k;

    cout << "Podaj ilosc zmiennych, ktora chcesz wpisac do tablicy: " << endl;
    cin >> k;

    int A[k];

    cout << "Podaj liczby: " << endl;
    for (int i; i < k; i++){
        cin >> A[i];
    }

    cout << "Tablica posortowana poprzez sortowanie babelkowe: " << endl;
    for (int i=0;i<k;i++){
        sortowanie_babelkowe(A,k);
        cout << A[i] << " ";
    }
    return 0;
}
