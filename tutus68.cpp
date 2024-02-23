#include<iostream>
using namespace std;
//this is tutorial for showing that we can defined a function of any class outside the class domain by the help 
//of templates
template<class T>
class ajay{
     public:
     T data;
     void display(T a);

};
template<class T>
void ajay<T>::display(T a){
    data=a;
    cout<<data;
}
int main(){
 ajay<int> aj;
 aj.display(7); 
return 0;
}