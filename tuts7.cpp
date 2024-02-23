#include<iostream>
using namespace std;
int main(){
    const int a=1;
    //after adding const we cant change the value of a if we do so program will shoe error
    float b=5.3;
    char q='d';
   
    cout<<"the value of b in int is "<<(int)b;
    cout<<"the value of a is "<<a;
    //a=45;


    return 0;
}