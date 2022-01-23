#include <iostream>

using namespace std;

int *odwracanie(int n,int T[10]){

    int *wskT = T;
    for (int i=0;i<n;i++){

        if (*(wskT+i)==*(wskT+n-1))
            continue;

        swap(*(wskT+i),*(wskT+n-1));
    }

    return T;
}
int main()
{
    int A[10] = {1,2,3,4,5};
    int m = 3;

    for (int i=0;i<m;i++){
        cout << *odwracanie(m,A) << " ";
    }
    cout << endl;

    *odwracanie(m,A);

    for (int i=0;i<m;i++){
        cout << *odwracanie(m,odwracanie(m,A)) << " ";
    }

    return 0;
}
