#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
void add(int i)
{
}
void add(float f)
{
}
void add(const char i)
{
}

int main()
{
    cout << add(6, 6) << endl;
    cout << add(6, 6, 6) << endl;
    cout << 10 << endl;
    cout << 10.20 << endl;
    cout << "baba" << endl;
}