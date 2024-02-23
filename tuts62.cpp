#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string st,st2;
    st="Ajay Singh";
    st2="My origination is from bihar";
    ofstream PrintOnTxt;//here we will use open function instead of constructor
    PrintOnTxt.open("tuts60samplea.txt");
    PrintOnTxt<<"Myself "+ st<<endl;
    PrintOnTxt<<st2;
    PrintOnTxt.close();

    ifstream GetdataOnscreen;
    GetdataOnscreen.open("tuts60samplea.txt");
    string s3;
    //this is for reading one word
    // GetdataOnscreen>>s3;
    // cout<<s3;
    

    //for whole line reading we use 
    while (GetdataOnscreen.eof()==0){
        getline(GetdataOnscreen,s3);
        cout<<" "<<s3<<endl;
    }
    GetdataOnscreen.close();
    
return 0;
}