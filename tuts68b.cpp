#include<iostream>
using namespace std;
//this is the tutorial for overloading a function 
func( int a){
    cout<<"I am the first func() and value given is "<<a;
}
template<class T>
func( T a){
    cout<<"I am the templatised func() and value given is "<<a;
}
int main(){
    func(4);
    //we give 4 integer input hence compiler find a func with integer
    //input if it will available it will call the function other wise
    //it will call templatised function
return 0;
}