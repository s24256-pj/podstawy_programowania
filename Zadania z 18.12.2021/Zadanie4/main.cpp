#include <iostream>
#include <vector>

using namespace std;

auto fSum(double (*f)(double) , int n, int m)-> double{

    return f(n)+f(m);
}


double fun(double r){

    double wynik = 0;
    for (int i =0;i<r;i++){
        wynik += i;
    }

    return wynik;;
}

int main()
{
    double x = 10;
    double y = 3;

    cout << "Wartosc funckji fun(x) = " << fun(x) << endl;
    cout << "Wartosc funckji fun(y) = " << fun(y) << endl;
    cout << "Suma wynikow obu funkcji = " << fSum(fun,x,y) << endl;

    return 0;
}

