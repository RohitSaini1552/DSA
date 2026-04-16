class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(auto c : s) mp1[c]++;
        for(auto c : t) mp2[c]++;
        for(auto x : mp1){
            if(mp2[x.first] != mp1[x.first]) return false;
        }
        return true;

        

        
    }
};