#include <iostream>

using namespace std;
char ascii(char tab[]){

    for (int i=33;i<127;i++){
        tab[i] = i;
        cout << i << "=" << tab[i] << " ";
    }
}

int main()
{
    char A[]={ascii(A)};

    return 0;
}
