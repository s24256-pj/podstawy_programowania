#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int k = 1;
    vector < int > B;
    int y;

    for (int i = 0; i < k; i++)
    {
        B.push_back(0);
        cin >> y;
        B.at(i) = y;
        k = k + 1;

        if (y == 0) {
            break;
        }
    }

    for (int i = 0; i < k - 1; i++) {
        cout << B[i] << " ";
        if ((i+1)% 5 == 0) {
            cout << endl;
        }
    }
    return 0;
}
