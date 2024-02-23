//THIS IS TUTORIALS ABOUT CONSTRUCTOR type
//this is type of default constructor in which  constructer takes void means it demand nothing from user.

#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    //here we can also define the complex constr. outside the complex class using :: it
    complex(void){
        a = 0;
        b = 0;
    }
    void print(void){
        cout<<"the complex no. is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex a1;
    a1.print();
return 0;
}