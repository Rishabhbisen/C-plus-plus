#include <iostream>

using namespace std;

class employe
{
    int id;
    int salary;

public:
    void setdata(void)
    {
        salary = 122;
        cout << " enter the id of employe" << endl;
        cin >> id;
    }
    void getdata(void)
    {
        cout << " the id of employe is " << id << endl;
    }
};

int main()
{
    employe fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }

    return 0;
}