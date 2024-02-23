//this is about the constructor call example in inheritences
#include<iostream>
using namespace std;
class base1{
    int data1;
    public:
    base1(int a){
        data1=a;
        cout<<"constructor base1 is called here.\n";
        cout<<"the value of data1 = "<<data1<<endl;
        }
    void printbase1(void){
        cout<<"Hello! World\n";
    }    
};
class base2{
    int data2;
    public:
    base2(int a){
        data2=a;
        cout<<"constructor base2 is called here.\n";
        cout<<"the value of data2 = "<<data2<<endl;
        }
    void printbase2(void){
        cout<<"Hello! World\n";
    }    
};

class derived:public base1,public base2{
    //if we replace in above line base1 and base2 then our base2 constructor will be call
    //first.or if we want to call base2 first then we add virtual with base2
    int d1,d2;
    public:
    derived(int a,int b,int c,int d):base1(a),base2(b){
        d1=c;
        d2=d;
        cout<<"constructor derived is called here.\n";
        cout<<"the values of d1 and d2 are "<<d1<<" and "<<d2<<" respectively."<<endl;
    }


};
int main(){
    derived ajay(3,4,6,7);
    ajay.printbase1();
    
return 0;
}