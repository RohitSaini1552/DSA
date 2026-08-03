// write a code to calculate the sum of deepest leaf nodes in a binary tree
class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
    void f(TreeNode* root, int level,int &ans){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL && level > 1) return;
        if(level == 1){
            ans += root->val;
            return;
        } 
        f(root->left,level-1,ans);
        f(root->right,level-1,ans);
    }
    int deepestLeavesSum(TreeNode* root) {
        int n = levels(root);
        int ans = 0;
        f(root,n,ans);
        return ans;
    }
};