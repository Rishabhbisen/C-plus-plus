// this is the simple example of destructor

// #include <iostream>

// using namespace std;

// class rishi
// {
// public:
//     rishi()
//     {
//         cout << " constructor invoked " << endl;
//     }
//     ~rishi()
//     {
//         cout << " destructor invoked " << endl;
//     }
// };

// int main()
// {
//     rishi a1;
//     rishi a2;

//     return 0;
// }

#include <iostream>

using namespace std;
int count = 0;

class rishi
{
public:
    rishi()
    {
        count++;
        cout << " this is the time when constructor called for the object " << count << endl;
    }
    ~rishi()
    {
        cout << " this is the time when my destructor called the object " << count << endl;
        count--;
    }
};

int main()
{

    cout << " we are insiding main function " << endl;
    cout << " creating first object " << endl;
    rishi n1;
    {
        cout << " entering this block " << endl;
        cout << " creating two more object " << endl;
        rishi n2, n3;
        cout << " exting this block" << endl;
    }
    cout << " back to main function " << endl;
    return 0;
}