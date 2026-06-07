// Write a code to remove all the occurences of a character from given string using recursion


#include<bits/stdc++.h>
using namespace std;
string removeAllOccurences(string &s,int i,string &ans){
    if(i == s.size()) return ans;
    if(s[i] != 'a') ans += s[i];
    return removeAllOccurences(s,i+1,ans);
}
void removeChar(string s,string ans){
    if(s.size() == 0){
        cout<<ans;
        return;
    }
    if(s[0] != 'a') removeChar(s.substr(1),ans+s[0]);
    else removeChar(s.substr(1),ans);
}
int main(){
    string s = "raghav";
    string str = "Master Blaster";
    string ans = "";
    string x = removeAllOccurences(s,0,ans);
    cout<<x<<endl;
   removeChar(str,"");
}