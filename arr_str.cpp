#include<iostream>
using namespace std;
int main(){
   int arr[9]={1,2,3,4,5,6,7,8,9};
   string str[9]={"one","two","three","four","five","six","seven","eight","nine"};
   int n,tmp=0;
   cin>>n;
   for(int i=0;i<9;i++){
       if(n==arr[i]){
           cout<<str[i];
           tmp=1;
           break;
       }
   }
   if(tmp==0){
       cout<<"Greater than 9";
   }
    return 0;
}