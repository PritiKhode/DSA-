#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    display(v);

    //reverseing an array
    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){
    //     int temp =v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }

    //uing for loop
    // for(int i=0,j=v.size()-1;i<=j;i++,j--){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp; +
    // }
    
    cout<<endl;

    reverse(v.begin(),v.end());
    display(v);

}
