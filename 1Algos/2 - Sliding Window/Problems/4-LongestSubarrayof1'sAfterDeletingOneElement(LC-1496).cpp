class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int z = 0;
        int maxLen = 0;
        while(j < n){
           if(nums[j] == 0) z++;
           if(z > 1){
                maxLen = max(maxLen,j-i);
                while(z > 1){
                    if(nums[i] == 0) z--;
                    i++;
                }
           }
           if(j == n-1) maxLen = max(maxLen,j-i+1);
           j++;
        }
        return maxLen-1;
    }
};