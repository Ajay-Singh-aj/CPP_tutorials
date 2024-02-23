#include<iostream>
//this is tutorial for multiple variable using.
using namespace std;
template<class T1, class T2>
class vector{
    public:
    T1 data1;
    T2 data2;
    vector(T1 a, T2 b){
        data1=a;data2=b;
        cout<<this->data1<<endl<<this->data2;


    }
};
int main(){
    vector <char ,float>v('A',1.8);
return 0;
}