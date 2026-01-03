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
void insertAtEnd(int val){
    Node* t = new Node(val);
    if(size == 0) head = tail = t;
    else{
        tail->next = t;
        tail = t;
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
    ll.insertAtEnd(10);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.display();
    cout<<ll.size<<endl;



}