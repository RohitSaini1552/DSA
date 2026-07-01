/*
         TC = O(n)
         SC = O(1) since asnwer vector should not be considered in space complexities
 */



class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int m = bookings.size();
        vector<int> ans(n);
        for(auto &q : bookings){
            int i = q[0], j = q[1], v = q[2];
            ans[i-1] += v;
            if(j < n) ans[j] -= v;
        }
        for(int i=1;i<n;i++){
            ans[i] += ans[i-1];
        }
        return ans;
    }
};