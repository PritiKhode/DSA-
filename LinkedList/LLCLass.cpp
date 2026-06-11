#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next =  NULL;
    }
};
class LinkedList{   
    public:     //USer define dats structure;
    Node* head ;
    Node* tail ;
    int size ;
    LinkedList(){
        head = tail = NULL;
        size =0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
        size ++;

    }
    void inertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
                temp->next = head ;
                head = temp;  
        }
        size++;
    } 
    void insertatKthPOsition(int idx,int val){
        if(idx<0  || idx> size)cout<<"Invalid Index"<<endl;
        else if(idx==0) inertAtHead( val);
        else if(idx==size) insertAtTail( val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=0;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next =temp->next;
            temp->next = t;
            size++;         // Remember dont write size++ outside the else 
        }

    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size) {
            cout<<"Invalid Input"<<endl;
            return -1;
        }
        else if(idx==0)  return head->val;
        else if(idx==size) return tail->val;
        else{
            Node* temp = head;
            for(int i=0;i<=idx-1;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void DelectAtHead(){
        if(size==0){
            cout<<"Your list is Empty "<<endl;
            return;
        }
        head=head->next;
        size--;
        
    }
    void DelectAtTail(){
        if(size==0){
            cout<<"Your list is Empty "<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            tail = temp;
            size--;
        }
        
    }
    void DelectAtIdx(int idx){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) return DelectAtHead();
        else if(idx==size-1) return DelectAtTail();
        else {
            Node* temp = head;
            for(int i=0;i<=idx;i++){
                temp =temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(20);
    ll.display();
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.display();
    ll.inertAtHead(60);
    ll.inertAtHead(70);
    ll.inertAtHead(80);
    ll.display();
    ll.insertatKthPOsition(8,90);
    ll.display();
    cout<<ll.getAtIdx(2)<<endl;
    ll.DelectAtHead();
    ll.display();
    ll.DelectAtTail();
    ll.display();
    ll.DelectAtIdx(4);
    ll.display();

}