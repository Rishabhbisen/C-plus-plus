#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    // int a = 45;
    // float b = 98.9;
    // cout <<(float)a<<endl;
    // cout<<(int )b;

    // int a = 34;
    // int &y = a;
    // float b = 45.4;
    // cout<<a<<endl;
    // cout<<y<<endl;
    // cout<<a+(float)b;

    //    const int a = 34;
    //     cout<<a<<endl;
    //   if we use const than wew can not change varialbe
    // a = 345; //
    // cout<<a;

    int a = 2332, b = 434, c = 34;
    cout << "the value of a is :" << a << endl;

    cout << "the value of b is :" << b << endl;
    cout << "the value of c is :" << c << endl;

    cout << "the value of a is : " << setw(4) << a << endl;
    cout << "the value of b is :" << setw(4) << b << endl;
    cout << "the value of c is :" << setw(4) << c << endl;

    return 0;
}
