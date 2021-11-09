#include <iostream>

using namespace std;

    void funkcja(int a, int b){
        cout << a * 2 << endl;
        cout << b + 100 << endl;
    };


    int main(){
        int a;
        int b;

        cout << "Podaj pierwsza liczbe" << endl;
        cin >> a;
        cout << "Podaj druga liczbe" << endl;
        cin >> b;

        funkcja(a,b);
        return 0;
    }

