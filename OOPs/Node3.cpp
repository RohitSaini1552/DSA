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
    b.next = &c;
    c.next = &d;
    // accessing b,c,d from a(Head)
    cout<<b.val<<" "<<(a.next)->val<<" "<<(*(a.next)).val<<endl;
    cout<<c.val<<" "<<((a.next)->next)->val<<" "<<(*(*(a.next)).next).val<<endl;
    cout<<d.val<<" "<<(((a.next)->next)->next)->val<<" "<<(*(*(*(a.next)).next).next).val;


}