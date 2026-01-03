//Write a program to print LinkedList in reverse order using function and pointer variable

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

//to display the linked list in correct order
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void displayReverse(Node* head){
    if(head == NULL) return;
    displayReverse(head->next);
    cout<<head->val<<" ";


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
    displayReverse(a);

}