#include<iostream>
using namespace std;
void rotate(int arr[],int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[] ={7,8,9,5,6,4};
    int n =sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotate(arr,2,4);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}  

