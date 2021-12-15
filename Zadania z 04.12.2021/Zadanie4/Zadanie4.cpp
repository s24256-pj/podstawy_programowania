#include <iostream>
#include <math.h>
#include <tuple>

using namespace std;

tuple<float,float> cone(float h, float r){

    float Pp = M_PI*pow(r,2);
    float V = ((M_PI*pow(r,2)*h)/3);

    return {Pp,V};
}
int main()
{
    auto [Pp,V] = cone(6,4);
    cout << "Pole podstawy wynosi: " << Pp << endl;
    cout << "Objetosc stozka wynosi: " << V << endl;

    return 0;
}
