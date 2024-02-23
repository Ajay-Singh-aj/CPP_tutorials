#include<iostream>
using namespace std;
class bank{
    int P;
    float R;
    int T;
    float totalamount;
    public:
    bank(){}
    bank(int p ,int t,float r){
        P=p;
        T=t;
        R=r;

        totalamount=P;
        for (int i = 0; i < t; i++)
        {
            totalamount=totalamount*(1+R);
        }   
    }
    void show(void){
        cout<<"The principle amount is "<<P<<endl;
        cout<<"The amount return after "<<T<<" years at the rate of "<<R<<" will be "<<totalamount<<endl;
    }

};
int main(){
    int princ,time;
    float rate;
    cout<<"Enter the value of Principle amount :\n";
    cin>>princ;
    
    cout<<"Enter the time period :\n";
    cin>>time;
    cout<<"Enter the rate (only in fraction less than 1) :\n";
    cin>>rate;
    bank b1(princ,time,rate);
    b1.show();
    

return 0;
}

/*
#include<iostream>
using namespace std;


class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){}
        BankDeposit(int p, int y, float r); // r can be a value like 0.04
        BankDeposit(int p, int y, int r); // r can be a value like 14
        void show();
};
BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnValue<<endl;
}
int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}*/
