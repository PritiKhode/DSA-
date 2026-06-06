#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int>v(2);
    int arr[5]={45,7,9,356,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the value of x = ";
    cin>>x;
    bool flage=false;
    for(int i=0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i]+arr[j]==x){
                v[0]=i;
                v[1]=j;
                flage=true;
                break;

            }
        }
        if(flage==true){
            break;
        }
    }
    if(flage==true){
        cout<<"The index of the two numbers are = "<<v[0]<<" "<<v[1]<<endl;
    }
    else{
        cout<<"The two numbers are not found in the array "<<endl;
    }
    return 0;
}