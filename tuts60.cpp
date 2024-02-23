#include<iostream>
#include<fstream>
/*These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase*/
using namespace std;
int main(){
    //this is for  writing a text into txt files but be carefull all the content in the txt file will
    //delete and only thing left that you want add.
    string st="Ajay Singh";
    ofstream out("tuts60samplea.txt");//just like constructor
    out<<st;

    //this is for reading 
    ifstream in("tuts60sampleb.txt");
    string st2,st3;
    /*to read only one word we use following
    in>>st2;
    cout<<st2<<endl;*/
    //to read the line we use getline function
    getline(in,st2);
    cout<<st2<<endl;
    //to read next line we will again call getline function
    getline(in,st2);
    cout<<st2<<endl;

return 0;
}