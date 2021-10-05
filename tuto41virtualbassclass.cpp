// this is the
/*
#include <iostream>

using namespace std;

class A
{
public:
    int a;
    A()
    {
        a = 10;
    }
};
class b : virtual public A
{
};
class c : virtual public A
{
};
class d : virtual public b, virtual public c
{
};

int main()
{
    d a1;
    cout << " a = " << a1.a;
    return 0;
}
*/

#include <iostream>

using namespace std;

class studant
{
protected:
    int roll_no;

public:
    void set(int a)
    {
        roll_no = a;
    }
    void print_num(void)
    {
        cout << " your roll no is " << roll_no << endl;
    }
};

class test : virtual public studant
{
protected:
    float maths, physics;

public:
    void sat_mark(float m1, float m2)
    {
        maths = m1;
        m2 = physics;
    }
    void print_mark(void)
    {
        cout << " your result is here " << endl
             << "maths " << maths << endl
             << "physics " << physics << endl;
    }
};

class sport : virtual public studant
{
protected:
    float score;

public:
    void set_scor(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << " your pt score is " << score << endl;
    }
};

class result : virtual public sport, virtual public test
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_num();
        print_mark();
        print_score();
        cout << " your total score is " << total << endl;
    }
};

int main()
{
    result a1;

    a1.set(4000);
    a1.sat_mark(78.9, 99.0);
    a1.set_scor(9);
    a1.display();
    return 0;
}
