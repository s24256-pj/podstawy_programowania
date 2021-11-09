#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj ocene od 2 do 5: " << endl;
    cin >> x;

    while(x>5 || x<2){
        cout << "Podaj ocene od 2 do 5" << endl;
        cin >> x;
    }

        switch(x)
        {

            case 2:
                cout << "Niedostateczny" << endl;
            break;

            case 3:
                cout << "Dopuszczajacy" << endl;
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
