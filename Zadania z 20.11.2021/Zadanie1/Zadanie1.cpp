#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > A;
    int x;
    int y;

    for (int i =0; i < 10; i++)
    {
            A.push_back(0);
            cout << A[i] << " ";
    }

    cout << "\nPodaj ilosc zmiennych: " << endl;
    cin >> x;
    cout << "Podaj liczby: " << endl;

     for (int i = 0; i < x; i++)
    {
            cin >> y;
            A.at(i) = y;
    }

    cout << "Wektor z podanymi liczbami: " << endl;

    for (int i = 0; i < 10 ; i++)
    {
            cout << A[i] << " ";
    }

    return 0;
}
