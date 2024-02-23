#include<iostream>
using namespace std;
int main(){
    int age;
    cout <<"Enter your age:\n";
    cin>>age;
    if (age>18)
    {
        cout<<"you can vote.\n";
    }
    else if(age<18 && age>13)
    {
       cout<<"you cannot vote.\n"; 
    }
    else
    {
       cout<<"you are a kid.\n"; 
    }
    
    
    return 0;
}