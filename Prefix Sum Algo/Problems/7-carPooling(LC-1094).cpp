class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n = trips.size();
        if(trips[0][0] > capacity) return false;
        int x = 1000, y = 0;
        for(auto &t : trips){
            if(x >= t[1]) x = t[1];
            if(y <= t[2]) y = t[2];
        }
        vector<int> v(y+1);
        for(auto &t : trips){
            int i = t[1], j = t[2];
            v[i] += t[0];
            if(j < y) v[j] -= t[0];
        }
        for(int i=1;i<y;i++){
            v[i] += v[i-1];
            if(v[i] > capacity) return false;
        }
        return true;

    }
};