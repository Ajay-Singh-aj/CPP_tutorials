#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a;
    cin>>a;
    cout<<fixed;//it fix the part before decimal
    cout<<setprecision(3)<<a;
    
return 0;
}