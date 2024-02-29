#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass * base_class_pointer;
    DerivedClass obj_derived;
    BaseClass obj_base;
    base_class_pointer = &obj_derived;
    base_class_pointer -> display();
    return 1;
}