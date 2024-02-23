#include <iostream>
// this is tutorial for virtual class function is part of run time polymorphism
using namespace std;
class base
{
public:
    int var_base = 10;
    virtual void display() /*by add virtual now we can run the display function of derived class it says
     if a pointer of base class is point to derived class variable and we want to run derived class function
     we can simply add virtual to base class then we have access use display of derived class*/
    {

        cout << "Displaying base class variable value : " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived = 20;
    void display()
    {
        cout << "Displaying base class variable value through derived class : " << var_base << endl;
        cout << "Displaying derived class variable value : " << var_derived << endl;
    }
};
int main()
{

    base *base_class_pointer;
    base base_obj;

    derived derived_obj;
    base_class_pointer = &derived_obj;
    base_class_pointer->display();
    return 0;
}