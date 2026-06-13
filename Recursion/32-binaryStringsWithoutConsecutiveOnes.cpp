// Write a code to print all binary strings of length n without consecutive 1s


#include<bits/stdc++.h>
using namespace std;
void generateStrings(int n,string ans){
    if(n == 0){
        cout<<ans<<endl;
        return;
    }
    if((ans.size() == 0 || ans.back() == '0')) generateStrings(n-1,ans+'1');
    generateStrings(n-1,ans+'0');
}
int main(){
    int n;
    cin>>n;
    generateStrings(n,"");
}