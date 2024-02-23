#include<iostream>
using namespace std;
// function templates
/*template<class T1, class T2>
float funcmean(T1 a,T2 b){
    float mean=(a+b)/2.0;
    return mean;
}

int main(){
float a;
a=funcmean(5,3.4);
printf("the average value is : %0.3f",a);    
return 0;
}*/
template<class T>
void swapp( T &a, T &b){
    T temp=a;
    a=b;
    b=temp ;
}
int main(){
    int x=7;
    int y=5;
    cout<<"the value of x and y before swapping is "<<x<<" and "<<y<<" respectively."<<endl;
    swapp(x,y);
    cout<<"the value of x and y after swapping is "<<x<<" and "<<y<<" respectively."<<endl;
}