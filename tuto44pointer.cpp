#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << " enter any value " << endl;
    cin >> a;
    int *ptr = &a;
    cout << " the value of a is: " << *ptr << endl;

    // new operater or0 keyword (both are  )
    int *arry = new int[3];
    arry[0] = 10;
    arry[1] = 20;
    arry[2] = 30;
    delete arry; // this is delet operator or keyword if we use this keyword our value will be change
    // if we are not use this keyword our programe value will not be change
    cout << " the value of arry[0] is :" << arry[0] << endl;
    cout << " the value of arry[1] is :" << arry[1] << endl;
    cout << " the value of arry[2] is :" << arry[2] << endl;

    float *p = new float(454.5);
    // *p = 999;   // if we write this so our out put is this 999
    cout << " the value of *p is :" << *p << endl;
    return 0;
}