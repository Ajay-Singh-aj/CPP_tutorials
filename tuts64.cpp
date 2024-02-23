#include<iostream>
//this is about templates
using namespace std;
template <class T>
class vector{
    public:
    T *arr;
    int size;
    vector(int m){
        size=m;
        arr=new T [size];
    }
    T dotproduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
        
    }
};
int main(){
    vector<float> v1(3);
    v1.arr[0]=3;
    v1.arr[1]=4;
    v1.arr[2]=6;
    vector<float> v2(3);
    v2.arr[0]=1.9;
    v2.arr[1]=2.2;
    v2.arr[2]=3.1;
    float dotproduct=v1.dotproduct(v2);
    cout<<dotproduct;
    
return 0;
}