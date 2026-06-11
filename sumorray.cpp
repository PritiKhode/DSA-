#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,8,9,7,4,5};
    int sum=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "
;        sum+=arr[i];
    }
    cout<<endl<<"Sum is : "<<sum;
    return 0;
}
