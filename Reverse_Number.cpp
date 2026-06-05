#include <iostream>
using namespace std;

int main()
{
    int num = 12345;
    // input from user 
    //int num;
   // cout << "Enter a number: ";
   // cin >> num;
    int reverse = 0;

    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    cout << "Reverse = " << reverse << endl;

    return 0;
}