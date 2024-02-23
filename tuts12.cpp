#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *b=&a;
    cout<<"the adress of a is:"<<&a<<endl;
    cout<<"the adress of a is:"<<b<<endl;
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of a is:"<<*b<<endl;


return 0;
}