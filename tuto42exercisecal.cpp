#include <iostream>
#include <cmath>

using namespace std;

class simplecalculater
{
    int a, b;

public:
    void getsimple()
    {
        cout << " enter number a " << endl;
        cin >> a;
        cout << " enter number b " << endl;
        cin >> b;
    }

    void diplaysimple()
    {
        cout << " the value of a + b is : " << a + b << endl;
        cout << " the value of a - b is : " << a - b << endl;
        cout << " the value of a * b is : " << a * b << endl;
        cout << " the value of a / b is : " << a / b << endl;
    }
};

class scintificcal
{
    int a, b;

public:
    void getscintific()
    {

        cout << " enter number a " << endl;

        cin >> a;
        cout << " enter number b " << endl;
        cin >> b;
    }

    void diplayscintific()

    {
        cout << " enter nomber for scintific calculater " << endl;
        cout << " the value of cos(a) is : " << cos(a) << endl;
        cout << " the value of sin(a) is : " << sin(a) << endl;
        cout << " the value of tan(a) is : " << tan(a) << endl;
        cout << " the value of  is tan(b): " << tan(b) << endl;
    }
};

class hybride : public simplecalculater, public scintificcal
{
};

int main()
{
    // simplecalculater calc;
    // calc.getsimple();
    // calc.diplaysimple();
    // scintificcal go;
    // go.getscintific();
    // go.diplayscintific();
    hybride calc;
    calc.getsimple();
    calc.diplaysimple();
    calc.getscintific();
    calc.diplayscintific();
    return 0;
}