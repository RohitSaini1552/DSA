




class Solution {
public:
    bool checkTree(TreeNode* root) {      
        bool ans = ((root->val) == ((root->left->val) + (root->right->val))) ?  true :  false;
        return ans;
        
    }
};