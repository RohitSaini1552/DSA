#include<bits/stdc++.h>
using namespace std;
void permutations1(string s, string ans){
    if(s.size() == 0){// size of string s is reducing by 1 in each recursive call
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        permutations1(s.substr(0,i)+s.substr(i+1),ans+s[i]);
    }
}

int main(){
    string str = "abc";
    permutations1(str,"");
    
}