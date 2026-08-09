#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

class Hashing{
    vector<list<int> > hashtable;
    int buckets ;

    public:

    Hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }
    int hashvalue(int key){
        return key%buckets; // Devision method
    }

    void addKey(int key){
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);

    }

    list<int>::iterator searchKey(int key){
    int idx = hashvalue(key);
    return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }
    void delectKey(int key){
        int idx = hashvalue(key);
        if(searchKey(key)!=hashtable[idx].end()){
            hashtable[idx].erase(searchKey(key));
            cout<<key<<" is delected"<<endl;
        }
        else{
            cout<<"KEy is not present inside the hash table";
        }
    }

};
int main(){
    Hashing h(10);
    h.addKey(8);
    h.addKey(5);
    h.addKey(4);

    h.delectKey(5);
    h.delectKey(5);
    return 0 ;


}