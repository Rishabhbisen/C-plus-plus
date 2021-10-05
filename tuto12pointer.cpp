#include <iostream>

using namespace std;

int main()
{
    // in this programme we covered pointer topic in c++
    int a;

    cout << " enter number that you want to get adrees\n";
    cin >> a;
    int *p = &a;
    cout << p << endl;

    // pointer to pointer

    int **c = &p;
    cout << p << endl;
    cout << c << endl;
    cout << &p << endl;
    cout << **c << endl;
    cout << *c << endl;

    return 0;
}
