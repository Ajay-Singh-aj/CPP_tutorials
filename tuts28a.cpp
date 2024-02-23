#include<iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
        void setvalue(int value){
            data=value;
        }
    friend void add( X,Y);
};
class Y{
    int num;
    public:
        void setvalue(int value){
            num=value;
        }
    friend void add( X,Y);
};
void add(X o1,Y o2){
    cout<<"the sum of data of X and num of Y is: "<<o1.data+o2.num;
}

int main(){
    X a;
    a.setvalue(8);
    Y b;
    b.setvalue(7);
    add(a,b);

return 0;
}