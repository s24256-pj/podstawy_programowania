#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    vector < double > A;
    int x;
    int k;
    int wynik;

    cout << "Podaj maksymalna liczbe zakresu od 0 do: " << endl;
    cin >> k;

    for (int i=0;i<51;i++){

        x = rand()%k;
        A.push_back(x);

        cout << A[i] << " ";
    }

    for (int i=30;i<43;i++){
        wynik += A[i];

    }
    cout << "\nSuma wartosci elemetow tablicy [30-42]:\n" << wynik << endl;


    return 0;
}
