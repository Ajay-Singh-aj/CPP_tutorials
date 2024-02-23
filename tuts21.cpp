#include <iostream>
using namespace std;
class employee
    {
    private:
        int a, b, c;

    public:
        int d, e;
        void setdata(int a, int b, int c);
        void getdata()
        {
            cout << "the value of a is " << a << endl;
            cout << "the value of b is " << b << endl;
            cout << "the value of c is " << c << endl;
            cout << "the value of d is " << d << endl;
            cout << "the value of e is " << e << endl;
        }
    };
    void employee::setdata(int a1,int b1,int c1){
        a=a1;
        b=b1;
        c=c1;
    }
int main()
{
    employee ajays;
    ajays.d=6;
    ajays.e=9;
    //we cannot change value of a,b,c by ajays.a,ajays.b,ajays.c respectively.because a,b,c are private we
    //can only change by setdata function only
    ajays.setdata(1,2,5);
    ajays.getdata();
    return 0;
}
/*#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}*/