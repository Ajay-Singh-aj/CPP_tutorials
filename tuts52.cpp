#include<iostream>
// this is example of array of pointer in class .
using namespace std;
class shop{
    int id;
    float price;
    public:
    void setdata(int a ,float b){
        id=a;
        price=b;
    }
    void getdata(void){
        cout<<"the item id is : "<<id<<endl;
        cout<<"the item price is : "<<price<<endl;
        }
    
};
int main(){
    int size=3;
    shop *arr = new shop[size];
    shop *arrTemp=arr;
    int p;float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the id and price for item no. "<<i+1<<endl;
        cin>>p>>q;
        arr->setdata(p,q);
        arr->getdata();
        arr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Here's the Details of item no. "<<i+1<<endl;
        // arrTemp->getdata();
        // arrTemp++;
        arr->getdata();
        arr++;
    }
    
    
return 0;
}