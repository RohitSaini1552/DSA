
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* head = root;
        TreeNode* temp = new TreeNode(val);
        if(root == NULL) return temp;
        if(root->val > val){
            if(root->left == NULL) root->left = temp;
            else insertIntoBST(root->left,val);
        }
        else{
            if(root->right == NULL) root->right = temp;
            else insertIntoBST(root->right,val);
        }
        return root;
    }
};                                