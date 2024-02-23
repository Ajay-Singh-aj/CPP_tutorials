#include<iostream>
// this is for array in object
using namespace std;
class employee{
     int id ;
     int salary;
     public:
     void setdata(void){
        salary=1000;
        cout<<"Enter the employee id : ";
        cin>>id;
     }
     void getdata(void){
        cout<<"the employee id is : "<<id<<endl;
        cout<<"the employee salary is : "<<salary<<endl;

     }
};

int main(){
    employee metafor[4];
    for (int i = 0; i < sizeof(metafor)/sizeof(metafor[0]); i++)
    {
        cout<<"This is about employee no. "<<i+1<<endl;
        metafor[i].setdata();
        metafor[i].getdata();
        cout<<"\n ";
    }
    
return 0;
}