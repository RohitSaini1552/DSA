/* 
class Solution {
public:
    void inOrder(TreeNode* root, vector<int> &v){
        if(root == NULL) return;
        inOrder(root->left,v);
        v.push_back(root->val);
        inOrder(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inOrder(root,v);
        return v[k-1];
    }
}; */

class Solution {
public:
    void inOrder(TreeNode* root, int k, int &count, int &ans){
        if(root == NULL) return;
        inOrder(root->left,k,count,ans);
        count++;
        if(count == k){
            ans = root->val;
            return;
        };
        inOrder(root->right,k,count,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int ans;
        inOrder(root,k,count,ans);
        return ans;
    }
};