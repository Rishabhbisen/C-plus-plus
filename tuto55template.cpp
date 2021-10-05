//this is default parameter of template

#include <iostream>

using namespace std;

template <class t1 = int, class t2 = float, class t3 = char>

class rishabh
{
    t1 a;
    t2 b;
    t3 c;

public:
    rishabh(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void diplay()
    {
        cout << " the value of a is :" << a << endl;
        cout << " the value of b is :" << b << endl;
        cout << " the value of c is :" << c << endl;
    }
};

int main()
{
    rishabh<> r1(45, 6.6, 'c');
    r1.diplay();

    return 0;
}