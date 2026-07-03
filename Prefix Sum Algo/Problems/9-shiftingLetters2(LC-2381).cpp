class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        int m = shifts.size();
        vector<long long> v(n);
        for(auto &s: shifts){
            int i = s[0], j = s[1], x = s[2];
            if(x == 0){
                v[i] -= 1;
                if(j + 1 < n) v[j+1] += 1;
            }
            if(x == 1){
                v[i] += 1;
                if(j + 1 < n) v[j+1] -= 1;
            }
        }
        for(int i=1;i<n;i++){
            v[i] += v[i-1];
        }
        for(int i=0;i<n;i++){
            char c = s[i];
            long long t = v[i];
            long long p = ((c - 'a') + t) % 26;
            if(p < 0) p = p + 26;
            s[i] = (char)(p + 'a');
        }
        return s;
    }
};