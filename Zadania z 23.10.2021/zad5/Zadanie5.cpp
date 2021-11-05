#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    cout << "Podaj szczerokosc" << endl;
    cin >> x;
    cout << "Podaj wysokosc" << endl;
    cin >> y;

    for(int i=0;i<y;i++)
    {
        for(int i=0;i<x;i++)
    {
        cout << "" << "#";
    }
        cout << "#" << endl;
    }


    return 0;
}
