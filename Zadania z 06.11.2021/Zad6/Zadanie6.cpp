#include <iostream>

using namespace std;

double max2(int a, int b){
    int c;
    if (a>b){
        c=a;
    }
    if (b>a){
        c=b;
    }
    if(a==b){
        c = a; // mo�na te� u�y� c = b, jest to bez r�nicy - wa�ne, �e program zwr�ci nam c
    }
    return c;
}

double max3(int a, int b, int c){
    int d = max2(a,b);
    int e;

    if (d>c){
        e = d;
    }
    if (d<c){
        e = c;
    }
    if (d==c) {
       e = d; // mo�na te� u�y� e = c, jest to bez r�nicy
    }
    return e;

}

int main(){
    int a;
    int b;
    int c;

    cout << "Podaj pierwsza liczbe" << endl;
    cin >> a;
    cout << "Podaj druga liczbe" << endl;
    cin >> b;

    if (a==b){
        cout << "Liczby maja taka sama wartosc: " << max2(a,b) << endl;
    }
    else {
    cout << "Wieksza liczba to z dwoch: "<< max2(a,b) << endl;
    }

    cout << "Podaj trzecia liczbe" << endl;
    cin >> c;
    if (max2(a,b) == c){
        cout << "Liczby maja taka sama wartosc: " << max3(a,b,c) << endl;
    }
    cout << "Najwieksza liczba z trzech: " << max3(a,b,c) << endl;

}
