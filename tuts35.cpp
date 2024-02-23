#include<iostream>
//destructor not take any value niether give
//it free up space
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"this is the time  when constructor is called for object no. "<<count<<endl;

    }
    ~num(){
        
        cout<<"this is the time  when destructor is called for object no. "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"We are inside the main function.\n";
    cout<<"Creating first object n1.\n";
    num n1;
    //destrutor can only destruct the content inside block which is given down.
    //it clear n2 and n3 but n1 is defined in main function hence n1 will not destruct by destructor
    //remember only one thing destructor destruct the block
    {
        cout<<"Now we are entering in block.\n";
        cout<<"Creating two more object n2 and n3.\n";
        num n2,n3;
        cout<<"Exiting the block.\n";
    }
    cout<<"Now again we return to main.\n";
return 0;
}