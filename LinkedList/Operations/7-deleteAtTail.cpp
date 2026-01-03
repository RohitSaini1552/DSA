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
void deleteAtTail(){
    if(size == 0) return;
    else {
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
        
     
}
void insertAtTail(int val){
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
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();
    ll.deleteAtTail();
    ll.deleteAtTail();
    ll.display();
    


}