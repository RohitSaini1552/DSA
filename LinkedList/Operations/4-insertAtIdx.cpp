#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
    //this is a memeber function or constructor.....can access class members
        head = tail = NULL;
        size = 0;
    }
void insertAtIdx(int idx, int val){
    if((idx > size) || (idx < 0)) return;
    Node* t = new Node(val);
    if(idx==0) {
        t->next = head ;
        head = t;
        if(size == 0) tail = t;
    }
    else if(idx == size) {tail->next = t;tail = t;} 
    else{
        Node* temp = head;
       for(int i=1;i<=idx-1;i++){
        temp = temp->next;
       }
       t->next = temp->next;
       temp->next = t;    
       }   
    size++;
    
}
void display(){
    Node* t = head;
    while(t != NULL){
        cout<<t->val<<" ";
        t = t->next;
    }
    cout<<endl;
}
};


int main(){
    
    LinkedList ll;
    Node* a = new Node(1);
    Node* b = new Node(2);

    ll.insertAtIdx(0,10);
    // ll.display();
    ll.insertAtIdx(1,30);
    ll.insertAtIdx(2,40);
    ll.insertAtIdx(3,50);
    ll.display();
    // cout<<ll.size<<endl;



}