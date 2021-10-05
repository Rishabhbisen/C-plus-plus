#include <iostream>

using namespace std;
class base_class
{
public:
    int var_base;
    void diplay()
    {
        cout << " displaying base class argumant :" << var_base << endl;
    }
};

class derived_class : public base_class
{
public:
    int var_derived;
    void display()
    {
        cout << " first displaying var_base class " << var_base << endl;
        cout << " second displaying var_derived class " << var_derived << endl;
    }
};

int main()
{
    base_class *base_class_pointer;
    base_class base_class_object;
    derived_class derived_class_object;
    base_class_pointer = &derived_class_object; // base class pointer poinnt to derived class
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 120;  // will show an error
    base_class_pointer->diplay();
    base_class_pointer->var_base = 3000;
    base_class_pointer->diplay();

    derived_class *derived_class_pointer;
    derived_class_pointer = &derived_class_object;
    derived_class_pointer->var_base = 2344;
    derived_class_pointer->var_derived = 400;
    derived_class_pointer->diplay();
    // derived_class_pointer->diplay();

    return 0;
}