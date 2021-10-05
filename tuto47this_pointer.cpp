#include <iostream>

using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a; // if we use same variable on both side so in this situation we use this pinter
        // this is a keyword
    }
    void getData(void)
    {
        cout << " the value of a is :" << a << endl;
    }
};

int main()
{
    A a;
    a.setData(200);
    a.getData();

    return 0;
}