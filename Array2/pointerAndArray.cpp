#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,7,8,9,6,4};
    int* ptr = arr;
    //cout<<ptr<<endl;
    //ptr[4]=4444;
    for(int i=0;i<=6;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    *ptr = 57;
    ptr++;
    *ptr = 8;
    ptr--;
     for(int i=0;i<=6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;

}