#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int i=1;
    double wynik = 1;

    cout << "Podaj podstawe potegi: " << endl;
    cin >> x;
    cout << "Podaj wykladnik potegi: " << endl;
    cin >> y;

    do
    {
        wynik = wynik*x;
        i = i+1;
        if(y==0){
            wynik = 1;
        }
    while(i<=y);

    cout << wynik << endl;

    return 0;
}
