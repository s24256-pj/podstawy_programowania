#include <iostream>

using namespace std;

int odwracanie(int n,int T[10]){

    int *wskT = &T[0];
    for (int i=0;i<(n-1);i++){

        if (*(wskT+i) == *(wskT+n-1))
            continue;

        swap(*(wskT+i),*(wskT+n-1));
    }

    return T[0];
}
int main()
{
    int A[10] = {1,2,3,4,5};
    int m = 3;

    for (int i=0;i<m;i++){
        cout << odwracanie(m,A) << " ";
    }

    // odwracanie(m,odwracanie(m,A)); - niestety nie dzia³a mi tutaj funkcja



    return 0;
}
