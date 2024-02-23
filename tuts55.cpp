#include <iostream>
using namespace std;
//This is tutorials for pointer to derived class which is a part of run time polymorphism
class base
{
public:
    int var_base;
    void display()
    {

        cout << "Displaying base class variable value : " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying base class variable value through derived class : "<<var_base<<endl;
        cout << "Displaying derived class variable value : "<<var_derived<<endl;
    }
};
int main()
{
    base *base_class_pointer;
    base base_obj;
    
    derived derived_obj;
    base_class_pointer = &derived_obj;//here giving address of derived class variable to base class pointer
    //the only thing we need to understand is jis class ka pointer hai woh usi class ke function ko call karega 
    //even though we defined or give address of pointer to derived class object.it wiil call function of that 
    //class in which it define

    //base_class_pointer->derived_0bj=87 
    /*throw an error because we can't change the variable of derived class from the pointer is of base class*/
    base_class_pointer->var_base = 34;
    base_class_pointer->display();

    derived * derived_class_pointer;//defining derived class function 
    derived_class_pointer=&derived_obj;
    derived_class_pointer->var_base=5768;
    derived_class_pointer->var_derived=8787;
    derived_class_pointer->display();//now it will call the display function of derived class 
    return 0;
}