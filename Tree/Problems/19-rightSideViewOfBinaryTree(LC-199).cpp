// Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.



class Solution {
public:
    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    void RightSideView(TreeNode* root, vector<int>& ans, int curr, int level) {
        if (root == NULL)
            return;
        if (curr == level) {
            ans[level] = root->val;
            return;
        }
        RightSideView(root->left, ans, curr + 1, level);
        RightSideView(root->right, ans, curr + 1, level);
    }
    vector<int> rightSideView(TreeNode* root) {
        int n = levels(root);
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++) {
            RightSideView(root, ans, 0, i);
        }
        return ans;
    }
};