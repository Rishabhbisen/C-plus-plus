#include <iostream>

using namespace std;

class complex
{
    int a, b;

    friend complex sum(complex o1, complex o2);

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void println()
    {
        cout << " your nomber is " << a << " + " << b << "i" << endl;
    }
};

complex sum(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, add;
    c1.setdata(1, 4);
    c1.println();

    c2.setdata(2, 4);
    c2.println();

    add = sum(c1, c2);
    add.println();

    return 0;
}