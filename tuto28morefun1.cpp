#include <iostream>

using namespace std;

class y; // forward decleratioon

class x
{
    int val1;
    friend void exchange(x &, y &);

public:
    void setvalue(int val)
    {
        val1 = val;
    }
    void getvalue()
    {
        cout << val1 << endl;
    }
};

class y
{
    int val2;
    friend void exchange(x &, y &);

public:
    void setvalue(int val)
    {
        val2 = val;
    }
    void getvalue()
    {
        cout << val2 << endl;
    }
};
void exchange(x &x, y &y)
{
    int tmp = x.val1;
    tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    x a1;
    y b1;
    a1.setvalue(12);
    cout << " THE value a1 before changing ";
    a1.getvalue();
    b1.setvalue(45);
    cout << " THE value b1 before changing ";
    b1.getvalue();
    exchange(a1, b1);

    cout << "";

    cout << " the value of a1 after changing ";
    a1.getvalue();

    cout << " the value of b1 after changing ";
    b1.getvalue();

    return 0;
}