#include<iostream>
#include<stack>
#include<string>
using namespace std;
int solve(int v1, int v2, char ch){
    if(ch=='+') return v1 + v2;
    if(ch=='-') return v1 - v2;
    if(ch=='*') return v1 * v2;
    return v1 / v2;
}
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    if(ch=='*' || ch=='/') return 2;
    return 0;
}
int main(){
    string s = " 3+(5 / 2) ";
    stack<int>val;
    stack<char>op;
    for(int i=0;i<s.size();i++){
        if(s[i] ==' ') continue;
        else if(((int)s[i] >= 48) && ((int)s[i] <= 57)) val.push((int)s[i]-48);
        else if(s[i] == '(') op.push(s[i]);
        else if(op.top() == '(') op.push(s[i]);
        else if(s[i] == ')'){
            while(op.top() != '('){
                char ch = op.top();
                op.pop();
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                int ans = solve(val1, val2, ch);
                val.push(ans);
            }
            op.pop();
        }
        else if(op.size() > 0 && prio(s[i]) > prio(op.top())) op.push(s[i]);
        else{
            while(op.size() > 0 && prio(s[i]) <= prio(op.top())){
                char ch = op.top();
                op.pop();
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                int ans = solve(val1, val2, ch);
                val.push(ans);
            }
            op.push(s[i]);
        }
    }
    while(op.size()>0){
            char ch = op.top();
            op.pop();
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1, val2, ch);
            val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<< 3+(5 / 2) ;
}
