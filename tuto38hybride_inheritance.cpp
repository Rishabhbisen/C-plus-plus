#include <iostream>

using namespace std;

class a
{
protected:
    int a;

public:
    void set_a()
    {
        cout << " enter the value of a :" << endl;
        cin >> a;
    }
};
class b : public a
{
protected:
    int b;

public:
    void set_b()
    {
        cout << " enter the value of b :" << endl;
        cin >> b;
    }
};
class c
{
protected:
    int c;

public:
    void set_c()
    {
        cout << " enter the value of c :" << endl;
        cin >> c;
    }
};

class d : public b, public c
{
protected:
    int d;

public:
    void mul()
    {
        set_a();
        set_b();
        set_c();
        cout << " multification of a,b,c :" << a * b * c << endl;
    }
};

int main()
{
    d a1;
    a1.mul();

    return 0;
}