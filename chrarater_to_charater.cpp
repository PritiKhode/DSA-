#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char name[10];
    char ch;
    int i = 0;
    cout << "Enter the name: ";
    while (i < 9)   // leave space for '\0'
    {
        ch = getchar();

        if (ch == '\n')   // stop when Enter is pressed
            break;

        name[i] = ch;
        i++;
    }

    name[i] = '\0';

    cout << "Name: " << name << endl;

    return 0;
}