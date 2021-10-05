// in this tutorial i am going to descuse about types of ambiguty , means which type of problem will come
#include <iostream>

using namespace std;

class a
{
public:
    void sat()
    {
        cout << " hello " << endl;
    }
};

class b
{
public:
    void sat()
    {
        cout << " good mourning " << endl;
    }
};

class d : public a, public b
{
public:
    void sat()
    {
        a ::sat(); // this is how to sat ambiguty
    }
};
int main()
{
    a a1;
    a1.sat();

    d a2;
    a2.sat();

    return 0;
}