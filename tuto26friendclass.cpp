#include <iostream>

using namespace std;
class complex;

class calculater
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex, complex);
    int sumcomcomplex(complex, complex);
};
class complex
{
    int a, b;
    friend class calculater;

public:
    void setnumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void getnumber()
    {
        cout << " your nomber is " << a << " + " << b << "i" << endl;
    }
};
int calculater::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculater::sumcomcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setnumber(1, 3);
    o2.setnumber(2, 3);
    calculater calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << " the sum is real part of o1 and o2 :: " << res << endl;
    int resc = calc.sumcomcomplex(o1, o2);
    cout << " the sum is real part of o1 and o2 :: " << resc << endl;

    return 0;
}