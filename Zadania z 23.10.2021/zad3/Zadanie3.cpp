#include <iostream>

using namespace std;

int main()
{
  string haslo;

  do
  {
    cout << "Podaj has³o" << endl;
    cin >> haslo;
  }

  while(haslo!="dobrehaslo");
  cout << "dobrze" << endl;
    return 0;
}
