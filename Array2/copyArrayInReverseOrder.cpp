#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> & a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v ;
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    display(v);

    vector<int> v1(v.size());
    for(int i=0;i<v1.size();i++){
        int j=v.size()-1-i;
        v1[i] = v[j];
    }
    display(v1);
    

}