#include <iostream>
using namespace std;

int main()
{
    int a = 84;
    int *p1 = &a;

    cout << "Address of a : " << &a << endl;
    cout << "Address of p1 : " << &p1 << endl;

    cout << "Value of p1 (address stored in p1) : " << p1 << endl;

    cout << "Value of a : " << a << endl;
    cout << "Value of a using *p1 : " << *p1 << endl;
    cout << "Value of a using *(&a) : " << *(&a) << endl;

    return 0;
}