#include <iostream>

using namespace std;

class rish
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << " the real part is : " << real << endl;
        cout << " the imginary part is : " << imaginary << endl;
    }
    void setdat(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    rish a1;       // this is simple class
    rish *p = &a1; // this is object of pointer
    a1.setdat(1, 100);
    a1.getdata();
    (p)->setdat(1, 200); // p-> you can write that type
    p->getdata();
    rish *p = new rish; // we can difine both way both are right
    return 0;
}