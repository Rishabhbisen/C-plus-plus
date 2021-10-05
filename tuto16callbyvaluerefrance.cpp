#include <iostream>

using namespace std;

// call by value
void swap(int a, int b)
{
    int c = a + b;
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// call by refrance using pointer
void swappointer(int *a, int *b)
{
    int c = *a + *b;
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//call by refrance using variable
void swapvar(int &a, int &b)
{
    int c = a + b;
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int r, b;
    cout << " enter first nmber" << endl;
    cin >> r;

    cout << " enter second nmber" << endl;
    cin >> b;
    cout << " the value of r is " << r << " the calue of b is " << b << endl;
    // swap(r, b); // this will not swap ( call by value)
    // swappointer(&r, &b); // this will swap ( call by refrance)
    swapvar(r, b); // this will swap ( refrance)
    cout << " the value of r is " << r << " the calue of b is " << b;

    return 0;
}