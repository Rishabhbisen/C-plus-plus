#include <iostream>

using namespace std;

class base1
{
    int data1; // this is private object

public:
    base1(int a) // this is contructor
    {
        data1 = a;
        cout << " base1 contructore is called " << endl;
    }
    void printdatabase1(void)
    {
        cout << " the value of data1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int a)
    {
        data2 = a;
        cout << " base2 contructor is called " << endl;
    }
    void printbase2data(void)
    {
        cout << " the value of data2 is " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << " derived class contructor is called " << endl;
    }
    void printderiveddata(void)
    {
        cout << " the value of derived1 class is " << derived1 << endl;
        cout << " the value of derived2 class is " << derived2 << endl;
    }
};

int main()
{
    derived rishabh(1, 2, 3, 4);
    rishabh.printdatabase1();
    rishabh.printbase2data();
    rishabh.printderiveddata();

    return 0;
}