#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setdata(int r1,int r2){
        a=r1;
        b=r2;
    }
    void setdataBysum(complex o1,complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void printdata(){
        cout<<"Our complex no. is "<<a<<"+"<<b<<"i"<<endl;
    }

};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.printdata();
    c2.setdata(3,4);
    c2.printdata();
    c3.setdataBysum(c1,c2);
    c3.printdata();
return 0;
}