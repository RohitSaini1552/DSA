#include<bits/stdc++.h>
using namespace std;
int f1(int n, vector<int> &dp1){
    if(n <= 1) return 1;
    if(dp1[n] != -1) return dp1[n];
    int x = 1;
    int ans = 0;
    while(x <= 6 && x <= n){
        ans = ans + f1(n-x,dp1);
        x++;
    }
    return dp1[n] = ans % 1000000007;
}
int f2(int n,vector<int> &dp2){
    if(n == 0) return 1;
    if(dp2[n] != -1) return dp2[n];
    int ans = 0;
    for(int i=1;i<=6;i++){
        if(n - i < 0) break;// since i is increasing no emaning
        ans += f2(n - i,dp2);
    }
    return ans % 1000000007;
}
int main(){
    int n;
    cin>>n;
    vector<int> dp1(n+1,-1);
    vector<int> dp2(n+1,-1);
    vector<int> dp3(n+1,-1);
    cout<<f1(n,dp1)<<" "<<f2(n,dp2);
}