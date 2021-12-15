#include <iostream>

using namespace std;

void fake(int a,int b){
    cout << a << " " << b << endl;
    a = rand();
    b = rand();
    cout << a << " " << b << endl;
}

void refer(int &a,int &b){
    cout << a << " " << b << endl;
    a = rand();
    b = rand();
    cout << a << " " << b << endl;
}
int main()
{
    int x = 2;
    int y = 3;

    fake(x,y);
    refer(x,y);
    return 0;
}
