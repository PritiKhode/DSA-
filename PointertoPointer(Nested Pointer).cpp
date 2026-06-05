#include <iostream>
using namespace std;

int main()
{
    int a = 89;

    int *p1 = &a;
    int **q1 = &p1;

    cout << "Address of a = " << &a << endl;
    cout << "Address of p1 = " << &p1 << endl;
    cout << "Address of q1 = " << &q1 << endl;

    cout << "Value of p1 (address of a) = " << p1 << endl;
    cout << "Value of q1 (address of p1) = " << q1 << endl;

    cout << "Value of a = " << a << endl;
    cout << "Value of a using *p1 = " << *p1 << endl;
    cout << "Value of a using *(&a) = " << *(&a) << endl;
    cout << "Value of a using **q1 = " << **q1 << endl;

    return 0;
}