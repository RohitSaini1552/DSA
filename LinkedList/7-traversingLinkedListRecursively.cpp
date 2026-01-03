//Write a program to print LinkedList in using function and recursion

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

//to display the linked list in correct order iteratively using pointer to node
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//to display the linked list in correct order recursively using pointer to node passed into function
void displayRec(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);

}


int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    displayRec(a);

}