#include <iostream>

using namespace std;

// int sum(int a, int b) // this is function there are 4 type of function
// {
//     int c = a + b;
//     return c;
// }

int sum(int a, int b); // this is function pototype if we write a programme after the main function
void g();
int main()
{
    int r, b;
    cout << " enter first nmber" << endl;
    cin >> r;
    cout << " enter second nmber" << endl;
    cin >> b;
    cout << " the sum is " << sum(r, b) << endl;
    g();
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void g()
{
    cout << " hello , i ma rishabh";
}