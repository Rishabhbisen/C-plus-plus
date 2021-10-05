#include <iostream>

using namespace std;

class studant
{
public:
    class adress
    {
    private:
        int num;
        // char name{20};
        int id;
        float salary;
        string name{20};

    public:
        void setdata(int nu, int i, float s, string n)
        {
            num = nu;
            id = i;
            salary = s;
            name = n;
        }
        void getdata()
        {
            cout << "studant number is " << num << endl;
            cout << " studant id is " << id << endl;
            cout << " studant salary is " << salary << endl;
            cout << " studant  name  is " << name << endl;
        }
    };
};

int main()
{
    studant ::adress a1;
    a1.setdata(10, 123, 34, "rishabh ");
    a1.getdata();

    return 0;
}