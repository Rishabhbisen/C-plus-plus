#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    //  const int a = 34;
    //     cout<<a<<endl;
    //   if we use const than wew can not change varialbe
    // a = 345; //
    // cout<<a;

    // int a= 23 , b =434 ,c = 3434;
    // //without setw
    // cout<<"the value of a is :"<<a<<endl;
    // cout<<"the value of b is :"<<b<<endl;
    // cout<<"the value of c is :"<<c<<endl;
    // // with setw

    // cout<<"the value of a is :"<<setw(4)<<a<<endl;
    // cout<<"the value of b is :"<<setw(4)<<b<<endl;
    // cout<<"the value of c is :"<<setw(4)<<c<<endl;

    int a = 34, b = 39;
    int c = ((((a * 5) + b) - 45) + 78);
    cout << c;

    return 0;
}
