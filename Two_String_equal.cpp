#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[50];
    char str2[50];
    cout<<"Enter the first string =  " ;
    cin>>str1;
    cout<<"Enter the second string =  " ;
    cin>>str2;
    if(strcmp(str1,str2)==0)
    {
        cout<<"String are Equal"<<endl;

    }
    else{
        cout<<"String are not equal"<<endl;
        return 0;
    }
}
