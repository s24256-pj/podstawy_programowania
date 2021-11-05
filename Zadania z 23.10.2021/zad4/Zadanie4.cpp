#include <iostream>

using namespace std;

int main()
{
    int silniaf = 1;
    int x;

    cout << "podaj liczbê" << endl;
    cin >> x;

    for (int i=1;i<=x;i++){
    silniaf *= i;
    continue;
    }
    cout << silniaf << endl;

    int silniaw = 1;
    int i =1;

    while(i<=x)
    {
      silniaw = silniaw*i;
      i = i+ 1;
    }
    cout << silniaw << endl;

    int silniadw = 1;
    int y = 1;

    do{
        silniadw = silniadw*y;
        y = y + 1;
    }
    while(y<=x);

    cout << silniadw << endl;

    return 0;
}
