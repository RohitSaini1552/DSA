class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.size();
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            int x = shifts[i];
            v[0] += x;
            if(i + 1 < n) v[i+1] -= x;
        }
        for(int i=1;i<n;i++){
            v[i] += v[i-1];
        }
        for(int i=0;i<n;i++){
            char c = s[i];
            long long x = v[i];
            long long p = ((c - 'a') + x) % 26;
            s[i] = (char)(p + 97);
        }
        return s;
    }
};