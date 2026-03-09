
class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return (1 + max(levels(root->left), levels(root->right)));
    }
    void nthOrder(TreeNode* root, double &sum, double &count, int curr, int level){
        if(root == NULL) return;
        if(curr == level){
            count++;
            sum += root->val;
            return;
        }
        nthOrder(root->left, sum, count, curr+1, level);
        nthOrder(root->right, sum, count, curr+1, level);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        int n = levels(root);
        vector<double> ans;
        
        for(int i=1;i<=n;i++){
            double sum = 0;
            double count = 0;
            nthOrder(root,sum,count,1,i);
            double avg = sum/count;
            ans.push_back(avg);
        }
        return ans;
        
    }
};