#include<iostream>
#include<cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays 
    the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific 
    operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
class simC{
    private:
    int a,b;
    public:
    void utility1(int n1,int n2){
       a=n1;b=n2;
    }
    void show(){
        cout<<"the value of sum of given value is "<<a+b<<endl;
        cout<<"the value of subtract of given value is "<<a-b<<endl;
        cout<<"the value of multiply of given value is "<<a*b<<endl;
        cout<<"the value of divide of given value is "<<(float)a/b<<endl;
    }
};
class sciC:public simC{
    private:
    int c,d;
    float pi=3.14;
    public:
    void utility2(int n1,int n2){
       c=n1;d=n2;
    }
    void get(void);

};
void sciC::get(void){
    
    cout<<"c is "<<((float)c/d)*100<<"% of d."<<endl;
    cout<<"the sine value of both number are "<<sin(c*pi/180)<<" and "<<sin(d*pi/180)<<" respectively."<<endl;


}
// class hybC:public sciC{
    
// };
int main(){
    sciC data;
    data.utility1(10,20);
    data.utility2(10,20);
    data.show();
    data.get();

    
    return 0;
}
/*class SimpleCalculator {
    int a, b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};
class ScientificCalculator{
    int a, b;

    public:
        void getDataScientific()
        {
            cout << "Enter the value of a" << endl;
            cin >> a;
            cout << "Enter the value of b" << endl;
            cin >> b;
        }

        void performOperationsScientific()
        { 
            cout << "The value of cos(a) is: " << cos(a) << endl;
            cout << "The value of sin(a) is: " << sin(a) << endl;
            cout << "The value of exp(a) is: " << exp(a) << endl;
            cout << "The value of tan(a) is: " << tan(a) << endl;
        }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};
int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    
    return 0;
}
*/