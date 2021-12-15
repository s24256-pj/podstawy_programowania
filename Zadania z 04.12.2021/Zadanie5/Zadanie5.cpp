#include <iostream>

using namespace std;

int sil_rek(int n){
    if(n==0)
        return 1;
    else
        return n*sil_rek(n-1);

}

int main()
{
    cout << sil_rek(6) << endl;
    return 0;
}
