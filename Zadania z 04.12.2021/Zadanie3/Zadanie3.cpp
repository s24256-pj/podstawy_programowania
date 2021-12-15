#include <iostream>
#include <math.h>

using namespace std;

bool traingle (float a, float b, float c){
    float pole;

    float d = max(a,b);
    float e = max(d,c);
    float f = min(a,b);
    float g = min(d,c);


    if((f+g)>e){

        float p = ((a+b+c)/2);
        pole = sqrt(p*(p-a)*(p-b)*(p-c));
        cout << "Pole trojkata to: " << pole << endl;
        return true;
    }

    else
        return false;


}
int main()
{
    cout << traingle(9,10,5) << endl;
    cout << traingle(40,9,3);

    return 0;
}
