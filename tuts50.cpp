//this tutorialabout revisiting pointer and use of new keyword
#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;
  
   
    //int *p = new int(40);
    //here we give value to the address of p pointer
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    //here we are creating an array of int size 3 at the address of arr pointer
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    //delete keyword used to delete dynamically allocated array.
    //syntax is:
    //delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
   
    return 0;
}
