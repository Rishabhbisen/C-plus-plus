// #include <iostream>

// using namespace std;

// class account
// {
// public:
//     float salary = 6000;
// };

// class programmer : public account
// {
// public:
//     float bonus = 5000;
// };

// int main()
// {
//     programmer p1;
//     cout << " salary is " << p1.salary << endl;
//     cout << " bonus is " << p1.bonus << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// class a
// {
// public:
//     void get()
//     {
//         cout << " hello...." << endl;
//     }
// };

// class b : public a
// {
// public:
//     void set()
//     {
//         cout << " dostoo...." << endl;
//     }
// };

// int main()
// {
//     b b1;
//     b1.get();
//     b1.set();

//     return 0;
// }

#include <iostream>

using namespace std;

class a
{
    int a = 4;
    int b = 5;

public:
    int get()
    {
        int c = a * b;
    }
};

class b : private a
{
public:
    void display()
    {
        int result = get();
        cout << " multification of a and b is :" << result << endl;
    }
};

int main()
{
    b a1;
    a1.display();

    return 0;
}