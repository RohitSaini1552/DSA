// minimum number of coins need to make a target sum from a given choices each of infinite supply

#include<bits/stdc++.h>
using namespace std;
int f1(int x, vector<int> &coins,vector<int> &dp1){
    if(x < 0) return INT_MAX;
    if(x == 0) return 0;
    if(dp1[x] != -1) return dp1[x];
    int ans = INT_MAX;
    for(auto &a : coins){
        ans = min(ans,f1(x-a,coins,dp1));
    }
    return dp1[x] = 1 + ans;
}

int f2(int x, vector<int> &coins, vector<int> &dp2){
    if(x == 0) return 0;
    if(dp2[x] != -1) return dp2[x];
    int ans = INT_MAX;
    for(auto &a : coins){
        if(a > x) continue;
        ans = min(ans,f2(x-a,coins,dp2));
    }
    if(ans == INT_MAX) return dp2[x] = INT_MAX;
    return dp2[x] = 1 + ans;
}

int main(){
    int x;
    cin>>x;
    vector<int> coins = {1,5,7};
    vector<int> dp1(x+1,-1);
    vector<int> dp2(x+1,-1);
    vector<int> dp3(x+1,-1);
    if(f2(x,coins,dp2) == INT_MAX) cout<<-1;
    cout<<f1(x,coins,dp1)<<" "<<f2(x,coins,dp2);
}