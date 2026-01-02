//write a proram to create a linked list using simple class Node:

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
    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<c.val<<endl;
    cout<<d.val<<endl;


}