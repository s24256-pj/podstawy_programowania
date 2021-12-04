#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > A;
    int x;
    int y;

    cout << "Podaj rozmiar wektora: " << endl;
    cin >> y;
    cout << "Podaj x: " << endl;
    cin >> x;

    for (int i = 0; i < y; i++)
    {
            A.push_back(x);
            cout << A[i] << " ";
            x = x +1;
    }

    return 0;
}
