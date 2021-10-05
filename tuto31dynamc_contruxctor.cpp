#include <iostream>

using namespace std;
class bankdeposite
{
    int principle;
    int years;
    float intrestrate;
    float returnvalue;

public:
    bankdeposite() {}
    bankdeposite(int p, int y, float r);
    bankdeposite(int p, int y, int r);
    void show();
};
bankdeposite::bankdeposite(int p, int y, float r)
{
    principle = p;
    years = y;
    intrestrate = r;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intrestrate);
    }
}

bankdeposite::bankdeposite(int p, int y, int r)
{
    principle = p;
    years = y;
    intrestrate = float(r) / 100;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intrestrate);
    }
}
void bankdeposite::show()
{
    cout << "principle amount was " << principle << " return value after " << years << " year is " << returnvalue << endl;
}

int main()
{
    bankdeposite a1, a2;
    int p, y;
    float r;
    int R;

    cout << " enter the value of p, y , r " << endl;
    cin >> p >> y >> r;
    a1 = bankdeposite(p, y, r);
    a1.show();

    cout << " enter the value of p, y , R " << endl;
    cin >> p >> y >> R;
    a2 = bankdeposite(p, y, R);
    a2.show();

    return 0;
}