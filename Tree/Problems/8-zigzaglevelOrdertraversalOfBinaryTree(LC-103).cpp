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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int n = levels(root);      
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
            vector<int> v; //M1
            NthLevel(root,v,1,i);
            if(i %2 == 0) reverse(v.begin(), v.end());
            ans.push_back(v);
            // v.clear(); // M2:declare v outside loop and instead use this
        }
        return ans;
        
        
    }
};

/*
 M2: for solving this instead of changing the driver function
 change the NthOrder traversal code that makes conditional recursive left or Right calls 
 according to the current level in recursive traversing
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
        if(level % 2 == 1){
        NthLevel(root->left, v, curr+1, level);
        NthLevel(root->right, v, curr+1, level);
        }
        else{
            NthLevel(root->right, v, curr+1, level);
            NthLevel(root->left, v, curr+1, level);
        }
        
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int n = levels(root);      
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
            vector<int> v; //M1
            NthLevel(root,v,1,i);
            // if(i %2 == 0) reverse(v.begin(), v.end());
            ans.push_back(v);
            // v.clear(); // M2:declare v outside loop and instead use this
        }
        return ans;
        
        
    }
};
*/