#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j , vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return ;
}

int main(){
    vector<int> v;
    
    v.push_back(5);
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(15);
    v.push_back(31);
    v.push_back(95);
    v.push_back(78);
    v.push_back(89);
    v.push_back(49);
    display(v);

    int k =22;
    int n = v.size();
    // agar k is greater than n then what we do 
    // we need to write loop 

    if(k>n) k=k%n;

    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
    
}