
/* Given an array nums containing n distinct numbers in the range [0, n], 
return the only number in the range that is missing from the array.
 */
 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //M1 : using cyclic sort(or index mapping)
        /* int n = nums.size();
        int missing;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i != nums[i]){
                missing = i;
                break;
            } 
        }
        return missing; */

        //M2 : using simple logic of sum of first n natural numbers
        int n = nums.size();
        int sum = 0;
        int total = n * (n + 1) / 2;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        return total - sum;
        
    }
};