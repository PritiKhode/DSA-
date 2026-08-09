#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a;
    a.push_back(45);
    a.push_back(8);
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    a.push_back(78);
    int x = 6;
    int idx =-1;
    // for(int i=0;i<a.size();i++){
    //     if(a[i]==x){
    //         idx = i;
           
    //     }

    // }
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]==x) {
            idx=i;
            break;
        }
        
    }
    cout<<idx;
}