#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int f(int i, int j, vector<int> &v){
    if(i == j || i + 1 == j) return 0; // only q matrix available and its cost  = 0
    if(dp[i][j] != -1) return dp[i][j];
    int ans = INT_MAX;
    for(int k = i+1;k < j;k++){
        ans = min(ans,(f(i,k,v) + f(k,j,v) + v[i] * v[j] * v[k]));
    }
    return dp[i][j] = ans;
}

int main(){
    int n;
    cin>>n;
    dp.resize(n,vector<int>(n,-1));
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>> dp2(n,vector<int>(n,0));
    for(int len = 3;len <= n;len++){
        for(int i = 0;i + len - 1 < n;i++){
            int j = len + i - 1;
            dp2[i][j] = INT_MAX;
            for(int k = i+1 ;k < j; k++){
                dp2[i][j] = min(dp2[i][j],dp2[i][k] + dp2[k][j] + v[i]*v[j]*v[k]);
            }
        }
    }
    cout<<dp2[0][n-1]<<endl;
    cout<<f(0,n-1,v);
}