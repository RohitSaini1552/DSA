#include<bits/stdc++.h>
using namespace std;

int g(int i, int j, vector<int> &v){
    int result = 0;
    for(int m = i; m <= j; m++){
        result = (result % 100 + v[m] % 100) % 100;
    }
    return result;
}

int f(int i, int j, vector<int> &v, vector<vector<int>> &dp1){
    if(i == j) return 0; // no smoke
    if(i + 1 == j) return v[i] * v[j]; // base case if only 2 colors are left(direct product)
    if(dp1[i][j] != -1) return dp1[i][j];
    int ans = INT_MAX;
    for(int k = i; k < j; k++){
        ans = min(ans,f(i,k,v,dp1) + f(k+1,j,v,dp1) + g(i,k,v) * g(k+1,j,v));
    }
    return dp1[i][j] = ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<vector<int>> dp1(n,vector<int>(n,-1));
    cout<<f(0,n-1,v,dp1);
}