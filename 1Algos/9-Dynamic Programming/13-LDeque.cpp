#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
long long f(int i, int j, vector<int> &v){
    if(i == j) return v[i];
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = max(v[i] - f(i+1,j,v), v[j] - f(i,j-1,v));
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    dp.resize(n,vector<int>(n,-1));
    dp.clear();
    int dp2[n][n] = {{0}};
    // Base case
    for(int i = 0; i < n; i++){
        dp2[i][i] = v[i];
    }
    for(int len = 2; len <= n; len++){
        for(int i = 0; i <= n - len; i++){
            int j = len + i - 1;  //(length of subarray using sliding window)
            dp2[i][j] = max(v[i] - dp2[i+1][j], v[j] - dp2[i][j-1]);
        }
    }
    cout<<f(0,n-1,v)<<endl;
    cout<<dp2[0][n-1];
}