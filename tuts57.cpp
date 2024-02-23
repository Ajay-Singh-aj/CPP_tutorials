#include<iostream>
#include<cstring>
using namespace std;
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title=s;
        rating =r;
    }
    virtual void display(){};//generally i miss the curlie bracket which gives error
};//semicolon is necessary
class CWHvideo: public CWH{
    protected:
    float Videolength;
    public:
    CWHvideo(string s,float r,float vl):CWH(s,r){
        Videolength=vl;
    }
    void display(){
        cout<<"This is the tutorial video which title is "<<title<<endl;
        cout<<"Length of the video is "<<Videolength<<" minutes."<<endl;
        cout<<"rating: "<<rating<<" out of 5."<<endl;
             
    }
};
class CWHtext: public CWH{
    protected:
    int words;
    public:
    CWHtext(string s,float r,int wc):CWH(s,r){
        words=wc;
    }
    void display(){
        cout<<"This is the tutorial text which title is "<<title<<endl;
        cout<<"no. of the words is "<<words<<"."<<endl;
        cout<<"rating: "<<rating<<" out of 5."<<endl;
             
    }
};

int main(){
    string s;
    float r,vl;
    int wc;
    //for video
    s="C++ tutorial video";
    r=4.89; vl=4.50;
    CWHvideo Cpp(s,r,vl);
    Cpp.display();

    //for text
    s="C++ tutorial text";
    r=4.19;
    wc=450;
    CWHtext Cpptext(s,r,wc);
    Cpptext.display();//calling function
    cout<<"By pointer we can obtain similar result to pointng class funtion: "<<endl;
    cout<<"After using pointer :"<<endl;
    CWH *tuts[2];
    tuts[0]=&Cpp;
    tuts[1]=&Cpptext;
    tuts[0]->display();
    tuts[1]->display();
//     Rules for virtual functions
// 1.They cannot be static
// 2.They are accessed by object pointers
// 3.Virtual functions can be a friend of another class
// 4.A virtual function in the base class might not be used.
// 5.If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class


return 0;
}