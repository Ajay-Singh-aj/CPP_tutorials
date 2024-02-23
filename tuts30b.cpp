//THIS IS TUTORIALS ABOUT CONSTRUCTOR type
//this is type of parameterised constructor in which  constructer takes 2 values means it demand nothing from user.

#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    //here we can also define the complex constr. outside the complex class using :: it
    complex(int x,int y){
        a = x;
        b = y;
    }
    void print(void){
        cout<<"the complex no. is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex a1(5,7);
    a1.print();
    //we can also represent above line as complex a1=comlex(5,7);
    complex a2=complex(7,7);
    a2.print();

return 0;
}