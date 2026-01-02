//write a program to create linked list and traverse it
//TC = O(n)
//SC = O(1) since this is constant space traversal we only used an extra node temp
//which is independent of input size(only created once ) but still creating a node occupies more size than a simple pointer to node

#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
};
int main(){
    Node a,b,c,d;
    a.val = 10;
    a.next = &b;
    // Node b;
    b.val = 20;
    b.next = &c;
    // Node c;
    c.val = 30;
    c.next = &d;
    // Node d;
    d.val = 40;
    d.next = NULL;
    // cout<<a.val<<endl;
    // cout<<b.val<<endl;
    // cout<<c.val<<endl;
    // cout<<d.val<<endl;
    

    Node temp = a;//This takes extra space of 1 node temp
    //this node temp and node a are at different but points to the same node b
    while(true){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        // temp.next = (temp.next)->next;//this will prints the content of 1st node for all nodes except the last node
        temp = *(temp.next);
    }

}