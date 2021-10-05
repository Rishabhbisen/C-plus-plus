// contreuctor overloading
#include <iostream>

using namespace std;
class constru
{
    int x, y;

public:
    constru()
    {
        x = 0;
        y = 0;
    }
    constru(int a, int b)
    {
        x = a;
        y = b;
    }
    constru(int a)
    {
        x = a;
        y = 0;
    }

    void println()
    {
        cout << " your nomber is " << x << " + " << y << "i" << endl;
    }
};

int main()
{
    constru c1(4, 6);
    c1.println();

    constru c2(5);
    c2.println();

    constru c4;
    c4.println();

    return 0;
}