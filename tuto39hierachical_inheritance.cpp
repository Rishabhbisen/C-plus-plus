#include <iostream>

using namespace std;
class shape
{
public:
    int a;
    int b;

    void get(int n, int m)
    {
        a = n;
        b = m;
    }
};

class retangle : public shape
{
public:
    int get_a()
    {
        int result = a * b;
        return result;
    }
};

class triyengle : public shape
{
public:
    int get_b()
    {
        float result = 0.5 * a * b;
        return result;
    }
};

int main()
{
    retangle r;
    triyengle t;
    int lenght, breadth, height, bass;
    cout << " enter a lenght and breadth of a rectangle " << endl;
    cin >> lenght >> breadth;
    r.get(lenght, breadth);
    int m = r.get_a();
    cout << " area of ractangle is " << m << endl;
    cout << " enter the base and height of triyengle " << endl;
    cin >> height >> bass;
    t.get(bass, height);
    // float n = t.get_b();
    cout << " area of triyengle is " << t.get_b() << endl;

    return 0;
}