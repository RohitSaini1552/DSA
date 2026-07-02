class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        vector<double>suffs(n,0);
        suffs[n-1] = satisfaction[n-1];
        for(int i=(n-2);i>=0;i--){
            suffs[i] = suffs[i+1] + satisfaction[i];
        }
        int idx = -1;
        for(int i=0;i<n;i++){
            if(suffs[i]>=0){
                 idx = i;
                 break;
            }
        }
        long long ans = 0;
        long long coeff = 1;
        if(idx==-1) return ans;
        else{
            for(int i=idx;i<n;i++){
                ans = ans + (satisfaction[i]*coeff);
                coeff++;
            }
            return ans;
        }
        

        
    }
};