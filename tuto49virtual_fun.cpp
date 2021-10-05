#include <iostream>

using namespace std;

class base
{
public:
    int var_base = 34;
    virtual void display()
    {
        cout << " 1 displaying base class object :" << var_base << endl;
    }
};
class dirived_clss : public base
{
public:
    int var_derived = 435;
    void display()
    {
        cout << " 2 displaying base class object " << var_base << endl;
        cout << " 2 displaying derived class object " << var_derived << endl;
    }
};

int main()
{
    base *base_class_pointer;
    base base_class_objecy;
    dirived_clss derived_classs_object;
    base_class_pointer = &derived_classs_object;
    // base_class_pointer->var_base = 5400;
    // base_class_pointer->display();
    dirived_clss *derived_classs_pointer;
    derived_classs_pointer = &derived_classs_object;
    // derived_classs_pointer->var_base = 300;
    // derived_classs_pointer->var_derived = 400;
    derived_classs_pointer->display();
    return 0;
}