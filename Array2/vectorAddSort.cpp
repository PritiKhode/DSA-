#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(9);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<v.at(4)<<endl;
    //v.at(4) = 8;
    for(int i=0;i<v.size();i++){
       cout<<v.at(i)<<" "; 
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

}