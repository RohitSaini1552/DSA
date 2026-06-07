// Write a code to print all the subsets of a given string using recursion

#include<bits/stdc++.h>
using namespace std;
vector<string> words;
/*
 M1 : 
TC = O(n) for new substr each time
SC = O(n)  
*/
void subsets(string s,string ans){
    // Base Case
    if(s.size() == 0){
        cout<<ans<<endl;
        return;
    }
    // Exclude Logic
    subsets(s.substr(1),ans);
    // Include Logic
    subsets(s.substr(1),ans+s[0]);
    
}
void subSets(string &s,string ans,int i){
    if(i == s.size()){
        // cout<<ans<<endl;
        words.push_back(ans);//or we can do anything
        return;
    }  
    // Include Logic
    subSets(s,ans+s[i],i+1);
    // Exclude Logic
    subSets(s,ans,i+1);
}
// M3 : Backtracking
int main(){
    string s = "abc";
    // subsets(s,"");
    subSets(s,"",0);
    for(int i=0;i<words.size();i++){
        cout<<words[i]<<" ";
    }
    cout<<endl;
}