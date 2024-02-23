#include<iostream>
using namespace std;
class c2;
class c1{
    int n1;
    friend void exchange( c1 &,c2 &);
    public:
    void setdata(int a){
        n1=a;
    }
    void disp(void){
        cout<< n1 <<endl;
    }
};
class c2{
    int n2;
    friend void exchange( c1 &,c2 &);
    public:
    void setdata(int a){
        n2=a;
    }
    void disp(void){
        cout<< n2 <<endl;
    }

};
void exchange( c1 &a1,c2 &a2){
    int temp=a1.n1;
    a1.n1=a2.n2;
    a2.n2=temp;
}
int main(){
    c1 x;
    c2 y;
    x.setdata(34);
    y.setdata(84);
    exchange(x,y);
    cout<<"the value of c after exchange is : ";
    x.disp();
    cout<<"the value of c after exchange is : ";
    y.disp();
return 0;
}