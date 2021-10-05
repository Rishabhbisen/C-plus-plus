#include <iostream>

using namespace std;

class shoop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void)
    {
        cout << " enter id of your item " << counter + 1 << endl;
        cin >> itemid[counter];
        cout << "enter price of your item" << endl;
        cin >> itemprice[counter];
        counter++;
    }
    void displayprice(void)
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "the price of item with id " << itemid[i] << "is" << itemprice[i] << endl;
        }
    }
};

int main()
{
    shoop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();

    return 0;
}