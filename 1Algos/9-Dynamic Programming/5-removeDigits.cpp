#include<bits/stdc++.h>
using namespace std;

vector<int> getDigits(int n){
    vector<int> v;
    while(n > 0){
        int d = n % 10;
        if(d != 0) v.push_back(d);
        n /= 10;
    }
    return v;
}
int f(int n, vector<int> &dp){
    if(n == 0) return 0;
    if(n > 0 && n <= 9) return 1;
    if(dp[n] != -1) return dp[n];
    vector<int> v = getDigits(n);
    int ans = INT_MAX;
    for(auto &x : v){
        ans = min(ans,f(n - x,dp));
    }
    return dp[n] = 1 + ans;
}
int tabulation(int n, vector<int> &dp2){
    for(int i=0;i<=n;i++){
        if(i == 0) dp2[i] = 0;
        else if(i > 0 && i <= 9) dp2[i] = 1;
        else{
            vector<int> v = getDigits(i);
            int ans = INT_MAX;
            for(auto &x : v){
                ans = min(ans,dp2[i-x]);
            }
            dp2[i] = 1 + ans;
        }
    }
    return dp2[n];
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    vector<int> dp2(n+1,-1);
    cout<<f(n,dp)<<" "<<tabulation(n,dp2);
}