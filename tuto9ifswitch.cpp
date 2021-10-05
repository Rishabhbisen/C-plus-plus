#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "Enter your age :" << age << endl;
    cin >> age;

    // if (age>18)
    // {
    //     cout<<"you can vote"<<endl;
    // }
    // else if(age<=10)
    // {
    //     cout <<"you can vote for babies"<<endl;
    // }
    // else
    // {
    //        cout <<"you can not vote"<<endl;
    // }

    switch (age)
    {
    case 18:
        cout << " you are 18" << endl;
        break;

    case 23:
        cout << " you are 23" << endl;
        break;

    case 67:
        cout << " you are 67" << endl;
        break;

    default:
        cout << " Not specify age" << endl;
        break;
    }

    return 0;
}
