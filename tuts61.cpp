#include<iostream>
#include<fstream>
//the most important thing for this tutorial is use of closefile when
//reading and writing will take place at the same time
using namespace std;

int main(){
    
    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    ofstream out("tuts60samplea.txt");
    out<<"My name is " + name;
    out.close();

    //this is for reading 
    ifstream in("tuts60samplea.txt");
    string content;
    //in>>content;
    //to read the line we use getline function
    getline(in,content);
    cout<<content<<endl;
    in.close();

return 0;
}
