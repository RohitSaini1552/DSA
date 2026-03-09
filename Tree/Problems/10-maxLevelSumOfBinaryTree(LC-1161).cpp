
class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return (1 + max(levels(root->left), levels(root->right)));
    }
    void NthLevel(TreeNode* root, int &sum, int curr, int level){
        if(root == NULL) return;
        if(curr == level){
            sum += root->val;
            return;
        }
        NthLevel(root->left, sum, curr+1, level);
        NthLevel(root->right, sum, curr+1, level);
    }
    int maxLevelSum(TreeNode* root) {
        int n = levels(root);      
        int maxSum = INT_MIN;
        int x = 0;
        for(int i=1;i<=n;i++){
            int sum = 0;           
            NthLevel(root,sum,1,i);
            if(maxSum < sum){
                x = i;
                maxSum = sum;
            } 
        }
        return x;
        
    }
};