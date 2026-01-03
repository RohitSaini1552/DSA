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

    //To calculate size of Linked list recursively
int sizeLL(Node* head){
    int size = 0;
    Node* temp = head;
    while(temp != NULL){
        size++;
        temp =  temp->next;
    }
    return size;
}



int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    //To calculate size of Linked list iteratively
    int size = 0;
    Node* temp = a;
    while(temp != NULL){
        size++;
        temp =  temp->next;
    }
    cout<<size<<endl;
    cout<<sizeLL(a);

}