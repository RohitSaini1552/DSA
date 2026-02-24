class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return (1 + max(levels(root->left), levels(root->right)));
    }
    void NthLevel(TreeNode* root, vector<int> &v, int curr, int level){
        if(root == NULL) return;
        if(curr == level){
            v.push_back(root->val);
            return;
        }
        NthLevel(root->left, v, curr+1, level);
        NthLevel(root->right, v, curr+1, level);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = levels(root);      
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
            vector<int> v; //M1
            NthLevel(root,v,1,i);
            ans.push_back(v);
            // v.clear(); // M2:declare v outside loop and instead use this
        }
        return ans;
        
    }
};