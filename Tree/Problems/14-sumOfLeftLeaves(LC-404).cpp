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
    void DFS(TreeNode* root, int &sum){
        if(root == NULL) return;

        /* M1:-
         if(root->left == NULL) return;
         if((root->left->left == NULL) && (root->left->right == NULL)) sum += (root->left->val);*/

        /* M2:-
        if((root->left != NULL) && ((root->left->left == NULL) && (root->left->right == NULL))) sum += root->left->val; */
        DFS(root->left, sum);
        DFS(root->right, sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        DFS(root,sum);
        return sum;
        
    }
};