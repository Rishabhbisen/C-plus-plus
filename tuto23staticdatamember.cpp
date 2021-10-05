#include <iostream>

using namespace std;

class studant
{
    int roll;
    int static count;

public:
    void getdata(void)
    {
        cout << "enter your roll nomber" << endl;
        cin >> roll;
        count++;
    }
    void setdata(void)
    {
        cout << " the roll nomber is " << roll << " and studant nomber" << count << endl;
    }
    static void getcount(void)
    {
        cout << " the value of count is " << count << endl;
    }
};

int studant ::count;

int main()
{
    studant s1, s2, s3;
    s1.getdata();
    s1.setdata();
    studant::getcount();

    s2.getdata();
    s2.setdata();
    studant::getcount();

    s3.getdata();
    s3.setdata();
    studant::getcount();

    return 0;
}