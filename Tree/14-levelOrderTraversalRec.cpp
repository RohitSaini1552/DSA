/*
write a program to print the elements of n th level
 of a binary tree using recursion(in left to right manner)
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int level(Node* root){
    if(root == NULL) return 0;
    return (1 + max(level(root->left), level(root->right)));
}
void showNth(Node* root, int curr, int levels){
    if(root == NULL) return;
    if(curr == levels){
        cout<<root->val<<" ";
        return;
    }
    showNth(root->left, curr+1, levels);
    showNth(root->right, curr+1, levels);   
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    int levels = level(a);
    for(int i=1;i<=levels;i++){
        showNth(a,1,i);
        cout<<endl;
    }


}