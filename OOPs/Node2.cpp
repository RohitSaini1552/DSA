//write a program to create a linkedlist using a class constructor :
// (1) Parameterised constructor
// (2) unparameterised constructor
// (3) default constructor

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
int main(){
    //forming nodes
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //creating links
    a.next = &b;
    a.next = &c;
    a.next = &d;

    

}