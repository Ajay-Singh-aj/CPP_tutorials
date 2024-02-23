#include<iostream>
using namespace std;
class shop{
    int itemid[10];
    int itemprice[10];
    int counter=0;
    public:
    //void initCounter(void){counter=0;}
    /*in this code we make only one shop general hence we comment out above function*/
    void setprice(void);
    void disprice(void);
};
void shop:: setprice(void){
    cout<<"Enter the item id :\n";
    cin>>itemid[counter];
    cout<<"Enter the item price :\n";
    cin>>itemprice[counter];
    counter++;
}
void shop::disprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"Here's detail of item no."<<i+1<<"\n It's Id is : "<<itemid[i];
        cout<<" and price is : "<<itemprice[i]<<endl;
    }
    
}

int main(){
    shop general;
    //general.initCounter();
    general.setprice();
    general.setprice();
    general.setprice();
    general.disprice();

return 0;
}

/*#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}
*/