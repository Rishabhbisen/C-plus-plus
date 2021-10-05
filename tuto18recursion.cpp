#include <iostream>

using namespace std;

int factorial(int n)
{
    // this are the condition
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 1;
    }
    if (n == 111)
    {
        return 0;
    }

    else
    {
        return (n * factorial(n - 1)); // this is the main condition
    }
}

int main()
{

    int value, fact;
    cout << " Enter value" << endl;
    cin >> value;
    fact = factorial(value);

    cout << " factorial nomber is :" << fact << endl;
    return 0;
}
