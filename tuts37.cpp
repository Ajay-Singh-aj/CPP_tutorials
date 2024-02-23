#include<iostream>
//this is example of inheritence
/*
1.Default visibility mode is private
2.Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3.Private Visibility Mode: Public members of the base class become private members of the derived class
4.Private members are never inherited*/
using namespace std;
class employee{
    public:
    int id ;
    float salary;
    void getdata(int a){
        id=a;
        salary=2000.0;
    }
    void show(){
        cout<<"The employee id is "<<id<<" and his salary is "<<salary<<" rs."<<endl;
    }
    employee(){}
};
class developer : public employee{
    public:
    int languageCode =7;

};
int main(){
    employee e1,e2;
    e1.getdata(1);
    e2.getdata(2);
    e1.show();
    e2.show();
    developer d1;
    d1.getdata(3);
    d1.show();
    cout<<"The language code is "<<d1.languageCode;

    
return 0;
}
/*#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
 // Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}


// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
*/