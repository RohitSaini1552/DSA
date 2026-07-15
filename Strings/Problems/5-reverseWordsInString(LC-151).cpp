// M1 : using string building logic using pointers and separated by space

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


// M2 : make all the strings individually and push into a vector or string and then reverse that string or vector and return
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> words;
        int i = 0;
        string temp = "";
        while(i < n){
            if(s[i] != ' ') temp += s[i];
            if(temp != "" && s[i] == ' '){
                words.push_back(temp);
                temp.clear();
            }
            i++;
        }
        if(temp != "") words.push_back(temp);
        reverse(words.begin(), words.end());
        string ans = "";
        for(int i=0;i<words.size();i++){
            ans += words[i];
            if(i != words.size()-1) ans += ' ';
        }
        return ans;
    }
};
