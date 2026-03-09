/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preOrder(TreeNode* root, queue<TreeNode*> &q){
        if(root == NULL) return;
        //work
        q.push(root);
        preOrder(root->left,q);
        preOrder(root->right,q);
    }
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        queue<TreeNode*> q;
        preOrder(root,q);
        TreeNode* Temp = (q.front());
        TreeNode* head = Temp;
        q.pop();
        while(q.size() > 0){
            TreeNode* temp = q.front();
            q.pop();
            Temp->left = NULL;
            Temp->right = temp;
            Temp = Temp->right;         
        }
        root = head;
    }
};