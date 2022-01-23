#include <iostream>
#include <string>

using namespace std;

void print(string *wsk){
    cout << wsk << " = " << *wsk;
}
int main()
{
    string x = "Hello, World!";
    string *ws = &x;
    print(ws);
    return 0;
}
