#include<iostream>
//this is about manipulator tutorial which basically tells us how much gap we want before printing our number.
#include<iomanip>
using namespace std;
int main(){
    int a=1;
    float b=5.3;
    char q='d';
   
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<setw(4)<<b<<endl;
    cout<<"the value of a is "<<setw(8)<<a<<endl;
    
    


    return 0;
}