#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Podaj piersz� licz�" << endl;
    cin >> a;
    cout << "Podaj drug� licz�" << endl;
    cin >> b;
    cout << "Podaj trzeci� licz�" << endl;
    cin >> c;

    for(int i=a;a<b;a++){
        if (a%c == 0){
            cout << a << endl;
        }
    }

    for(int i=b;b<a;b++){
        if (b%c == 0){
            cout << b << endl;
        }
    }

    return 0;
}
