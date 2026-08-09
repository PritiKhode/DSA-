#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a;
    a.push_back(45);
    a.push_back(8);
    a.push_back(6);
    a.push_back(7);
    a.push_back(3);
    a.push_back(78);
    a.push_back(36);
    a.push_back(12);
    
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" " ;
    }
    cout<<endl;
    a.pop_back();
    a.pop_back();
    a.pop_back();
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" " ;
    }

}