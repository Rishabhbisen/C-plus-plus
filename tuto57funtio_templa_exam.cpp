// in this tutorial we will decuse about example of function template

// #include <iostream>

// using namespace std;

// template <class t>
// t fun(t &a, t &b)
// {
//     t result = a + b;
//     return result;
// }

// int main()
// {
//     int i = 6;
//     int j = 7;

//     float m = 4.9,
//           n = 6.8;
//     cout << " the addision of 2 nom is :" << fun(i, j) << endl;
//     cout << " the addision of 2 nom is :" << fun(m, n) << endl;

//     return 0;
// }

// function template with multiple parameter
#include <iostream>

using namespace std;

template <class x, class y, class z>
void fun(x a, y b, z c)
{
    cout << " the value of a is :" << a << endl;
    cout << " the value of b is :" << b << endl;
    cout << " the value of c is :" << c << endl;
}

int main()
{
    fun('5', 3, 67.87);

    return 0;
}
