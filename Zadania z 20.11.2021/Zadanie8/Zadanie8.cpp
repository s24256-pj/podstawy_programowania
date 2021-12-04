#include <iostream>
#include <cstdlib>

using namespace std;

void quicksort(int tab[],int poczatek,int koniec){

    int p = poczatek - 1;
    int k = koniec + 1;
    int pivot = tab[(p+k)/2];

    while (1){

        while(pivot > tab[++p]);
        while(pivot < tab[--k]);
        if (p<=k)
            swap(tab[p],tab[k]);
        else
            break;
    }

    if (k > poczatek)
        quicksort(tab, poczatek,k);
    if (p < koniec)
        quicksort(tab,p,koniec);
}

int main()
{
    int A[10];

    cout << "Losowo wygenerowana tablica: " << endl;
    for (int i = 0; i < 10; i++) {

        A[i] = rand()%10;

        cout << A[i] << " ";
    }

    quicksort(A,0,9);

    cout << "\nPosortowana tablica metoda quicksort: " << endl;
    for (int i = 0; i < 10; i++){
        cout << A[i] << " ";
    }

return 0;
}
