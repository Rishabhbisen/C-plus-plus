#include <iostream>

using namespace std;

// this is structer
struct studant
{
    int id;
    float salary;
    char favchar;
};

// this is unions

union employer
{
    int id;
    char favchar;
    float salary;
};

int main()
{
    // enum
    enum meta
    {
        breafast,
        lounch,
        dinner
    };
    cout << breafast << endl;
    cout << dinner << endl;
    cout << lounch << endl;

    struct studant rishabh;
    rishabh.id = 137;
    rishabh.salary = 20000000;
    rishabh.favchar = 'r';
    cout << " rishabh id is " << rishabh.id << endl;
    cout << " rishabh salary is " << rishabh.salary << endl;
    cout << " rishabh favchar is " << rishabh.favchar << endl;

    // in union you can exucute  only one line of programme

    union employer baba;
    baba.id = 430;
    // baba.favchar = 'b';
    // baba.salary = 34343;
    cout << baba.id << endl;
    // cout << baba.salary << endl;
    // cout << baba.favchar << endl;

    return 0;
}