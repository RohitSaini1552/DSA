//write a program to create a linkedlist using a class constructor and traverse the entire list using Do while Loop :

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
    //forming Nodes 
    Node a(10), b(20), c(30), d(40);

    // linking
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // Pointer traversal
    Node* temp = &a;//this temp is not a node.....it is a pointer to a node type

    do {
        cout << temp->val << " ";
        temp = temp->next;
    } while (temp != NULL);

    return 0;
}
