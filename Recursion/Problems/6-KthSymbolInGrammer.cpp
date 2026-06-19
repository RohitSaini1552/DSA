// Kth Symbol in grammar
                    // LC - 779



/* class Solution {
public:
    string ans;
    void grammer(int &n,int j,string &str){
        if(j > n){
            ans = str;
            return;
        }
        string s = "";
        for(int i=0;i<str.size();i++){
            if(str[i] == '0') s += "01";
            else s += "10";
        }
        str = str + s;
        grammer(n,j+1,s);
    }
    int kthGrammar(int n, int k) {
        string str = "0";
        string s = "";
        grammer(n,1,str);
        char x = ans[k-1];
        int p = x - '0';
        return p;
    }
};
 */
//M2 : using recursion
class Solution {
public:
    int symbol(int n,int k,bool flag){
        if(n == 1){
            if(flag == true) return 0;
            else return 1;
        }
        if(k % 2 == 0) return symbol(n-1,k/2,!flag);
        else return symbol(n-1,(k/2) + 1,flag);
    }
    int kthGrammar(int n, int k) {
        bool flag = true;
        return symbol(n,k,flag);
    }
};
