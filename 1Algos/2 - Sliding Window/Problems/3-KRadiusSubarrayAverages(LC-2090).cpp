class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n,-1);
        if(n < 2*k+1) return ans; // can work with (n <= 2*k) but this edge case works better
        if(k == 0) return nums; // can be removed even...no issues
        long long sum = 0;
        for(int i=0;i<=2*k;i++) sum += nums[i];
        ans[k] = sum/(2*k+1);
        int left = 1; // int i
        int right = 2 * k + 1; // int j
        int centre = k + 1; // int x can also work but good naming is more presentable
        while(right < n){
            sum = sum - nums[left-1] + nums[right];
            ans[centre] = sum/(2*k+1);
            left++;
            right++;
            centre++;
        }
        return ans;


        
        
    }
};