#include <iostream>

using namespace std;

int main()
{
    int arry[4] = {12, 23, 34, 45};
    int array[4];
    array[0] = 343;
    array[1] = 33443;
    array[2] = 35643;
    array[3] = 3473;

    cout << arry[0] << endl;
    cout << arry[1] << endl;
    cout << arry[2] << endl;
    cout << arry[3] << endl;

    cout << array[0] << endl;
    //you can change the value of a array
    array[2] = 11111;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << array[i] << endl;
    }

    // array to pointer

    int *p = arry;
    cout << " the value of *p is " << *p << endl;
    cout << " the value of *p+1 is " << *(p + 1) << endl;
    cout << " the value of *p+2 is " << *(p + 2) << endl;
    cout << " the value of *p+3 is " << *(p + 3) << endl;

    return 0;
}