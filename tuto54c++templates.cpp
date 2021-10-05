// c++ template there are two type of template
// 1. function templete and 2. class template
/*
#include <iostream>

using namespace std;

template <class t>
class vector
{
public:
    t *arr;
    int size;
    vector(t m)
    {
        size = m;
        arr = new t[size];
    }
    t product(vector &v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> a1(3);
    a1.arr[0] = 1.3;
    a1.arr[2] = 2.4;
    a1.arr[3] = 1;
    vector<float> a2(3); // we can difine int type of
    a2.arr[0] = 1.3;
    a2.arr[2] = 2.4;
    a2.arr[3] = 1;
    // cout << a1.product(a2) << endl;
    float a = a1.product(a2);
    cout << " the sum of the equation is :" << a;

    return 0;
}
*/
/*
#include <iostream>

using namespace std;

template <class t>
class a
{
public:
    t num1 = 6;
    t num2 = 8;
    void display()
    {
        cout << " addition of num1 and num2 : " << num1 + num2 << endl;
    }
};

int main()
{
    a<int> b;
    b.display();

    return 0;
}
*/
/*
#include <iostream>

using namespace std;

template <class t>
class hello
{
    t a;
    t b;

public:
    hello(t x, t y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        // cout << " sum of the two value is :" << a + b << endl;
        cout << " the value of a and b is :" << a << " , " << b << endl;
    }
};

int main()
{
    hello<int> a1(2, 3);
    a1.display();

    return 0;
}
*/

/*
//class template with multipal parameter
#include <iostream>

using namespace std;

template <class t1, class t2>

class good_mourning
{
    // t1 a = 45;  // if you use privete class , this type declaration is not possible
    // you will show a error
    // t2 b = 45;
    t1 a;
    t2 b;

public:
    good_mourning(t1 x, t2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << " multifly of two nom is :" << a * b << endl;
    }
};

int main()
{
    good_mourning<int, float> a1(34, 34); // < you can use float , int , double>
    a1.display();

    return 0;
}
*/

#include <iostream>

using namespace std;

template <class t>

class good
{
public:
    t size;
    t arr[];
    void insert()
    {

        for (int j = 1; j <= 10; j++)
        {
            cout << j << ",";
        }
    }
};

int main()
{
    good<int> b1;
    b1.insert();

    return 0;
}