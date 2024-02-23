#include<iostream>
//this is an example of single inheritence
//here we make public data of class data to private of derived class
using namespace std;
class  data{
    int data1;//private data is not inheritable.
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
//private store all the public data of class data
//hence we can not call setdata ,getdata1,getdata2 directly in derived
//object we need to call them in derived class func.
class derived :private data{
    int data3;
    public:
    void operate();
    void show();

};
void data::setdata(void){
    data1=10;
    data2=20;
}
int data::getdata1(void){
    return data1;
} 
int data::getdata2(void){
    return data2;
} 
void derived::operate(void){
    //here we can call setdata
    setdata();
    data3=data2*getdata1();
}
void derived::show(void){
    cout<<"The value of data1 is "<<getdata1()<<endl;
    cout<<"The value of data2 is "<<data2<<endl;
    cout<<"The value of data3 is "<<data3<<endl;
}
int main(){
    derived der;
    //der.setdata();
    der.operate();
    der.show();
    
return 0;
}