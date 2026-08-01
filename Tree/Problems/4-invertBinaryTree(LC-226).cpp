/* class Solution {
public:
    void f(TreeNode* root){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL) return;
        TreeNode* l = root->left;
        TreeNode* r = root->right;
        root->right = l;
        root->left = r;
        if(root->left != NULL) f(root->left);
        if(root->right != NULL) f(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        f(root);
        return root;
    }
}; */


class Solution {
public:
    void f(TreeNode* root){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL) return;
        swap(root->left,root->right);
        
        if(root->left != NULL) f(root->left);
        if(root->right != NULL) f(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        f(root);
        return root;
    }
};


class Solution {
public:
    void f(TreeNode* root){
        if(root == NULL) return;
        swap(root->left,root->right);
        
        f(root->left);
        f(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        f(root);
        return root;
    }
};