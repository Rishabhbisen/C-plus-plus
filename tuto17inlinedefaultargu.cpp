#include <iostream>

using namespace std;

// inline int tea(int a, int b) // this is nline argumant
// {
//     return a * b;
// }

//const( argumant )doesn't change any value of the programme

// this is default argumant
float moneyrecived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    // int a, b;
    // cout << " enter a  and b value" << endl;
    // cin >> a >> b;
    // cout << " a and b valur is " << tea(a, b) << endl;
    // cout << " a and b valur is " << tea(a, b) << endl;
    // cout << " a and b valur is " << tea(a, b) << endl;
    // cout << " a and b valur is " << tea(a, b) << endl;
    // cout << " a and b valur is " << tea(a, b) << endl;
    // cout << " a and b valur is " << tea(a, b) << endl;
    // cout << " a and b valur is " << tea(a, b) << endl;
    // cout << " a and b valur is " << tea(a, b) << endl;
    // cout << " a and b valur is " << tea(a, b) << endl;
    // cout << " a and b valur is " << tea(a, b) << endl;
    int money = 100000;
    cout << "if you have " << money << " in your bank account , you will recive " << moneyrecived(money) << " after 1 year " << endl;
    cout << " for vip , if you have " << money << " in your bank account , you will recive " << moneyrecived(money, 1.1) << " after 1 year " << endl;
    return 0;
}