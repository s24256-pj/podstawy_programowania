#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    do
    {
        y=x;
        cin >> x;
        cout << x << endl;
    }
    while(x!=y);
    cout << "KONIEC ZABAWY" << endl;
    return 0;
}
