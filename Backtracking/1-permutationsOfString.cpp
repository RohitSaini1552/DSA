
// Write a code to print all the permutations of a string using backtracking


#include<bits/stdc++.h>
using namespace std;

void permutations(string &s, string ans, int i){
    if(i == s.size()){// form permutations until only last 1 element left to be arranged
        cout<<ans<<endl;
        return;
    }
    for(int j=i;j<s.size();j++){
        swap(s[i],s[j]);// make every character of leftover string as first character to be permuted(i.e s[i] = s[j])
        permutations(s,ans+s[i],i+1);
        swap(s[i],s[j]);// revert the changes made in 1 computation path
    }
}
int main(){
    string str = "abc";
    permutations(str,"",0);
}