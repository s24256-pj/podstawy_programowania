#include <iostream>

using namespace std;
swapp(int *a, int *b){

    swap(*a,*b);
}
int main()
{
    int x = 2;
    int y =3;
    int *wsk = &x;
    int *wsk1 = &y;

    cout << "x = " << *wsk << "\ny = " << *wsk1 << endl;
    cout << "Po zamianie: \n";

    swapp(&x,&y);
    cout << "x = " << *wsk << "\ny = " << *wsk1 << endl;

    return 0;
}
