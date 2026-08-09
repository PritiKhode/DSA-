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
    a.push_back(57);
    a.push_back(89);
    a.push_back(8);
    a.push_back(6);
    a.push_back(7);
    a.push_back(3);
    a.push_back(78);
    a.push_back(36);
    a.push_back(12);
    a.push_back(57);
    a.push_back(89);
    a.push_back(23);
    cout<<"Size : " << a.size()<<endl;
    cout<<"Capacity : " << a.capacity()<<endl;
    a.pop_back();
    a.pop_back();
    a.pop_back();
    a.pop_back();
    a.pop_back();
    a.pop_back();
    a.pop_back();
    cout<<"Size : " << a.size()<<endl;
    cout<<"Capacity : " << a.capacity()<<endl;