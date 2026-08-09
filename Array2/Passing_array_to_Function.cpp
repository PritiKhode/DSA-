#include<iostream>
using namespace std;
void display(int* a, int size ){
    for(int i = 0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void change(int b[], int size){
    b[5]=200;
}
int main(){
    int arr[] = {5,8,6,9,5,8,5,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);
}