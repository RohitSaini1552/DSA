/* this is solution for LC 40
using pure recursion */


class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &arr,int target,vector<int> v,int idx){
        if(target == 0){
            ans.push_back(v);
            return;
        }
        if(idx == arr.size()) return;
        if(target < 0) return;
        if(arr[idx] <= target){ //pick and not pick both
            v.push_back(arr[idx]);
            solve(arr,target-arr[idx],v,idx+1);
            v.pop_back();
            // we can also call for unpick of arr[idx] here only
        }
        //unpick call
        /*
        dont call for unick call of 1st occurence of duplicates since it will only make duplicate answers only
        so after calling for 1st occurence of picked
        directly start with pick and unpick of next uniqe element
        */
        int j = idx + 1;
        while(j < arr.size() && arr[j] == arr[j-1]) j++;
        solve(arr,target,v,j);

    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<int> v;
        sort(arr.begin(),arr.end());
        solve(arr,target,v,0);
        return ans;
    }
};

