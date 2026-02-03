#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    if(s.length()%2 != 0) return false;
    stack<char>st;
    for(int i=0;i,s.length();i++){
        if(s[i] == '(') st.push('(');
        else{
            if(st.size() == 0) return false;
            else st.pop();
        }
    }
    if(st.size() == 0) return false;
    else return true;
}
int main(){
    string s = "((())";
    for(int i=0;i<s.size();i++) cout<<s[i]<<" ";
    cout<<endl<<isBalanced(s);

}