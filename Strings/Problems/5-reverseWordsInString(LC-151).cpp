// M1

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        int j = n - 1;
        while(j >= 0){
            string temp = "";
            while(j >= 0 && isalnum(s[j])){
                temp += s[j];
                j--;
            }
            if(temp.size()){
                reverse(temp.begin(),temp.end());
                if(ans.size()) ans += " ";
                ans += temp;
                
                
            } 
            j--;
        }
        return ans;
    }
};