#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj ocenê: " << endl;
    cin >> x;

    while(x>5 || x<1){
        cout << "Podaj ocene od 1 do 5" << endl;
        cin >> x;
    }

        switch(x)
        {
            case 1:
                cout << "Niedopuszczaj¹cy" << endl;
            break;

            case 2:
                cout << "Niedostateczny" << endl;
            break;

            case 3:
                cout << "Dopuszczaj¹cy" << endl;
            break;

            case 4:
                cout << "Dobry" << endl;
            break;

            case 5:
                cout << "Bardzo dobry" << endl;
            break;
        }
    return 0;
}
