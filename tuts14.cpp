 /*#include<iostream>
 using namespace std;
 struct employee{
    int eId;
    char favChar;
    float salary;
 };
 int main(){
    //struct help us to store multivariable in one data type.
     struct employee harry;
     harry.eId = 1;
     harry.favChar = 'c';
     harry.salary = 120000000;
     cout<<"The value is "<<harry.eId<<endl; 
     cout<<"The value is "<<harry.favChar<<endl; 
     cout<<"The value is "<<harry.salary<<endl; 
 return 0;
 }*/


 //this is about typedef of struct here we can use ep or something in place of  struct employee
 /*#include<iostream>
 using namespace std;
 typedef struct employee{
    int eId;
    char favChar;
    float salary;
 } ep;
 int main(){
    //struct help us to store multivariable in one data type.
     ep harry;
     harry.eId = 1;
     harry.favChar = 'c';
     harry.salary = 120000000;
     cout<<"The value is "<<harry.eId<<endl; 
     cout<<"The value is "<<harry.favChar<<endl; 
     cout<<"The value is "<<harry.salary<<endl; 
 return 0;
 }*/

 //union take only maximum space in its and display single value at a time
/*#include<iostream>
 using namespace std;
 union employee{
    int eId;
    char favChar;
    float salary;
 };
 int main(){
    //struct help us to store multivariable in one data type.
     union employee harry;
     harry.eId = 1;
     harry.favChar = 'c';
     harry.salary = 120000000;
     //here it will show salary as correct rest will provide garbage value.
     cout<<"The value is "<<harry.eId<<endl; 
     cout<<"The value is "<<harry.favChar<<endl; 
     cout<<"The value is "<<harry.salary<<endl; 
 return 0;
 }*/

//this is about enum which provide number to the word in it
 #include<iostream>
 using namespace std;
 int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = breakfast;
    Meal m2 = lunch;
    cout<<m1<<endl;
    cout<<m2;
 return 0;
 }