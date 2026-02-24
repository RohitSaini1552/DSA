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

void showNth(Node* root, vector<int> &ans, int curr, int level){
    if(root == NULL) return;
    if(curr == level){
        ans.push_back(root->val);
        return;
    }
    showNth(root->left, ans, curr+1, level);
    showNth(root->right, ans, curr+1, level);   
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

    vector<int> ans;
    int level = 2;
    showNth(a,ans,0,level);
    int i = 0;
    while(i < ans.size()){
        cout<<ans[i]<<" ";
        i++;
    }
}