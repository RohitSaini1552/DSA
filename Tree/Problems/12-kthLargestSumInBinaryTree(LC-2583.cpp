class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return (1 + max(levels(root->left), levels(root->right)));
    }
    void NthLevel(TreeNode* root, long long &sum, int curr, int level){
        if(root == NULL) return;
        if(curr == level){
            sum += root->val;   
            return;
        }
        NthLevel(root->left, sum, curr+1, level);
        NthLevel(root->right, sum, curr+1, level);
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        int n = levels(root);
        if(n < k) return -1;  
        vector<long long> v; //M1    
        for(int i=1;i<=n;i++){  
            long long sum = 0;         
            NthLevel(root,sum,1,i);
            v.push_back(sum);
            // v.clear(); // M2:declare v outside loop and instead use this
        }
        sort(v.begin(), v.end());
        return v[v.size()-k];
        
    }
};