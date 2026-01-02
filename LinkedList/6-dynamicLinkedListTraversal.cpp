#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    //Dynamic allocation of linked list
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    //Linking of Nodes
    a->next = b;
    b->next = c;
    c->next = d;
    //d->next = NULL by default due to constructor

    //traversing the linked list
    Node * temp = a;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

}