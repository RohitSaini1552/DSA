#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    int dp[n][3] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            if(i == 0) dp[0][j] = v[0][j];
            else{
                dp[i][0] = v[i][0] + max(dp[i-1][1],dp[i-1][2]);
                dp[i][1] = v[i][1] + max(dp[i-1][0],dp[i-1][2]);
                dp[i][2] = v[i][2] + max(dp[i-1][0],dp[i-1][1]);
            }
        }
    }
    cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});

}