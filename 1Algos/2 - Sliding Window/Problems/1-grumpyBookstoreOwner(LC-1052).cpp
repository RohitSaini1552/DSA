// 1052. Grumpy Bookstore Owner
        // (LC - 1052)

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int loss = 0;
        int satisfaction = 0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i] == 1) loss += customers[i];
            else satisfaction += customers[i]; 
        }
        int maxLoss = loss;
        int idx = 0;
        int i = 1;
        int j = minutes;
        while(j < n){
            loss = loss - ((grumpy[i-1] == 1) ? customers[i-1] : 0) + ((grumpy[j] == 1) ? customers[j] : 0);
            satisfaction = satisfaction  + ((grumpy[j] == 0) ? customers[j] : 0); 
            if(maxLoss < loss){
                maxLoss = loss;
                idx = i;
            }
            i++;
            j++;
        }
        /* vector<int> v = grumpy;              // No Need to make copy or change in the original grumpy
        for(int i=idx;i<(idx+minutes);i++){     
            v[i] = 0;
        } */
        /* int ans = 0;
        for(int i=0;i<n;i++){
            if(v[i] == 0) ans += customers[i];          // No need to recompute the values  of max
        } */
        return (satisfaction + maxLoss);
        
    }
};
    