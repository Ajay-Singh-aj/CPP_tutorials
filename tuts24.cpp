#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
    void setdata(void);
    void getdata(void);
    //the following is static function which can access by static variable only.
    static void getcount(void){
        cout<<"This is employee no."<<count+1<<endl;
    }
};
void employee::setdata(void){
cout<<"Enter your id : ";
cin>>id;
count++;
}
void employee::getdata(void){
    cout<<"The employee no. "<<count<<" has id no. "<<id<<endl;
}
int employee::count;//if we want to count start from hundred we can write here
int main(){
    employee ajay, abhay ,vijay;
    ajay.getcount();
    ajay.setdata();
    ajay.getdata();
    
    abhay.getcount();
    abhay.setdata();
    abhay.getdata();

    vijay.getcount();
    vijay.setdata();
    vijay.getdata();
return 0;
}
/*#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}
*/