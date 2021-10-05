#include <iostream>

using namespace std;

// this is normal function
// float function1(float a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// int function2(int a, int b)
// {
//     int avg = (a + b) / 2;
//     return avg;
// }

// now we will use function template
template <class t>
void hello(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

template <class t1, class t2>

float function2(t1 a, t2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    // this is normal function
    // float a = function1(5, 2);
    // int b = function2(5, 2);
    // cout << " the avg of 2 value is :" << a << endl;
    // cout << " the avg of 2 value is :" << b << endl;

    // this is simple method to implimant the
    float a;
    a = function2(5, 2);
    cout << " the avg of 2 nomber is :" << a << endl;
    int x = 5, y = 7;
    hello(x, y);
    cout << x << endl
         << y << endl;

    return 0;
}