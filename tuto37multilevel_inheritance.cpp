// #include <iostream>

// using namespace std;

// class a
// {
// public:
//     void set()
//     {
//         cout << " Helloo....." << endl;
//     }
// };

// class b : public a
// {
// public:
//     void get()
//     {
//         cout << " Good mourning....." << endl;
//     }
// };

// class c : public b
// {
// public:
//     void let()
//     {
//         cout << " Good night....." << endl;
//     }
// };

// int main()
// {
//     c a1;
//     a1.set();
//     a1.get();
//     a1.let();

//     return 0;
// }

#include <iostream>

using namespace std;

class a
{
protected:
    int a;

public:
    void get(int n)
    {
        a = n;
    }
};
class b
{
protected:
    int b;

public:
    void set(int n)
    {
        b = n;
    }
};

class c : public a, public b
{
public:
    void display()
    {
        cout << " the value of a is :" << a << endl;
        cout << " the value of b is :" << b << endl;
        cout << " additin of a and b is :" << a + b << endl;
    }
};

int main()
{
    c a1;
    a1.get(10);
    a1.set(20);
    a1.display();

    return 0;
}