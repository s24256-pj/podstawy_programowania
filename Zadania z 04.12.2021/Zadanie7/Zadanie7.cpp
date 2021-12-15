#include <iostream>
#include <cstdlib>


using namespace std;

int przekatna(int n,int m,int tab[10][10]){
    int wynik = 0;

    if(n!=m)
        cout << "Macierz musi byc kwadratowa";

    else{
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (i==j)
                    wynik += tab[i][j];
            }
        }
    }
    return wynik;
}


void look(int n, int m, int tab[10][10]){
    int maxx = tab[0][0];

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(maxx < tab[i][j])
                maxx = tab[i][j];
            else
                continue;
        }
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(tab[i][j] == maxx){
                cout << "Najwieksza wartosc to: " << maxx << endl;
                cout << "Znajduje sie w wierszu: " << i << endl;
                cout << "oraz kolumnie: " << j << endl;
            }
            else
                continue;
}
    }
}

void zmiana(int n,int m, int tab[10][10]){
    int p,k;

    cout << "Podaj numery kolumn ktore maja zostac zamienione: " << endl;
    cin >> p;
    cin >> k;

    if(k<p)
        swap(k,p);

    for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if(i==p){
                    swap(tab[p][j],tab[k][j]);
                    cout << tab[i][j] << " ";
                }
                else
                    cout << tab[i][j] << " ";
            }
            cout << endl;
    }

}
int main()
{
    int A[10][10];
    int n,m;

    cout << "Podaj ilosc wierszy: " << endl;
    cin >> n;
    cout << "Podaj ilosc kolumn: " << endl;
    cin >> m;


    for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                A[i][j] = rand()%10;
                cout << A[i][j] << " ";
            }
            cout << endl;
    }

    look(n,m,A);
    cout << przekatna(n,m,A) << endl;
    zmiana(n,m,A);


    return 0;
}
