#include<iostream>
#include<math.h>
using namespace std;
class p2;
class p1{
    int a,b;
    friend void distance(p1 o1,p2 o2);
    public:
    p1(int x,int y){
        a=x;
        b=y;
    }
};
class p2{
    int a,b;
    friend void distance(p1 o1,p2 o2);
    public:
    p2(int x,int y){
        a=x;
        b=y;
    }
};
void distance(p1 o1,p2 o2){
    int c,d;
    double e;
    // cout<<o1.a<<endl;
    // cout<<o2.a<<endl;
    c=((o1.a)-(o2.a))*((o1.a)-(o2.a));
    // cout<<c<<endl;
    d=((o1.b)-(o2.b))*((o1.b)-(o2.b));
    //cout<<(c+d)<<endl;
    e=pow((c+d),0.5);
cout<<"the distance between two point is "<<e<<endl;
}
int main(){
    p1 o1(2,3);
    p2 o2(1,3);
    distance(o1,o2);
return 0;
}
