// maximum Average subarray 1(LC-643)



class Solution {
public:
        double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        long long maxSum = sum;
        int maxIdx = 0;
        for(int i=1;i<=(n-k);i++){
            sum = sum + nums[i+k-1] - nums[i-1];
            if(maxSum < sum){
                maxSum = sum;
                maxIdx = i;
            }
        }      
        return (double)maxSum/k;
        
        
    }
};