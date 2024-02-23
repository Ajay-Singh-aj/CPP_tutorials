#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void disp(void);
};
void binary ::read(void)
{
    cout << "Enter a number to check binary\n";
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format.\n";
            exit(0);
        }
        else
        {
            cout << "correct binary format.\n";
            break;
        }
    }
}
void binary::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = 1;
        }
        else
        {
            s.at(i) = 0;
        }
    }
}
void binary::disp(void)
{
    cout<<"Your one's complement is: "<<endl;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     cout << s.at(i);
    // }
    cout<<s;
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.disp();
    return 0;
}