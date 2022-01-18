#include <iostream>

using namespace std;

struct trojkat{

    float a,b,c;

};

float obwod(trojkat t){
    return t.a+t.b+t.c;
}

int main()
{
    trojkat A;
    A.a = 2;
    A.b = 3;
    A.c = 4;

    cout << "Obwod trojkata A to: " << obwod(A)<< endl;
    return 0;
}
