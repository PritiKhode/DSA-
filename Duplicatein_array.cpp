#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int>v(2);
    int arr[]={7,9,356,4 , 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x;
    for(int i=0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i]==arr[j]){
                x=arr[i];
                v[0]=i;
                v[1]=j;
                break;

            }
        }
    }
    cout<<"The number is " <<x<<" with index of the two numbers  which are dupliacte  = "<<v[0]<<" "<<v[1]<<endl;
    return 0;
}