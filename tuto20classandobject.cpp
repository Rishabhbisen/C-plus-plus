/*#include <iostream>

using namespace std;

class studant
{
public:
    int id;
    float fees;
    string name;
};

int main()
{
    studant a1;
    a1.id = 234;
    a1.fees = 234.8;
    a1.name = "rishabh";

    cout << a1.id << endl;
    cout << a1.fees << endl;
    cout << a1.name << endl;

    return 0;
}*/

/*
#include <iostream>

using namespace std;

class studant
{
private:
    int a;
    int b;// this is a private , i did not declere the function outside the programme and i declered the int a function outside the programme

public:
    int id;
    string name;
    float number;

    void setdata(int i, string n, float s, int a1)
    {
        id = i;
        name = n;
        number = s;
        a = a1;
    }
    void getdata()
    {
        cout << id << " " << name << " " << number << " " << a << endl;
    }
};

int main(void)
{
    studant s1, s2, s3, s4;

    s1.setdata(201, "rishabh", 123, 1);
    s2.setdata(434, "babu", 78, 2);
    s3.setdata(776, "syam", 56, 3);
    s4.setdata(556, "harma", 7, 4);
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s4.getdata();

    return 0;
}
*/

#include <iostream>

using namespace std;

class studant
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void getdata()
    {
        cout << "the value of a " << a << endl;
        cout << "the value of b " << b << endl;
        cout << "the value of c " << c << endl;
        cout << "the value of d " << d << endl;
        cout << "the value of e " << e << endl;
    }
};

int main()
{
    studant s1;
    s1.d = 4;
    s1.e = 5;
    s1.setdata(1, 2, 3);
    s1.getdata();

    return 0;
}