#include <iostream>

using namespace std;
class number
{
public:
    int a;

public:
    number() {}
    number(int num) // parameterizwd constructor
    {
        a = num;
    }
    number(number &i) // copy constructor
    {
        cout << " copy contructor called " << endl;
        a = i.a;
    }
    void display()
    {
        cout << " the number of this object is " << a << endl;
    }
};

int main()
{
    number x(20); // parameterizwd constructor called
    number y1(x); // copy construster called
    number y3(x);
    cout << y1.a;

    // number x, y, z(45), z2;
    // x.display();
    // y.display();
    // z.display();
    // number z1(z);
    // z1.display();
    // z2 = z;
    // z2.display();
    // number z3 = z;
    // z3.display();

    return 0;
}