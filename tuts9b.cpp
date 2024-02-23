#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age:\n";
    cin >> age;

    switch (age)
    {
    case 22:
        cout << "you are eligible for marriage.\n";
        break;
    case 18:
        cout << "you can vote.\n";
        break;
    case 2:
        cout << "you are a kid.\n";
        break;
    default:
        cout << "no special cases\n";
        break;
    }
    return 0;
}
