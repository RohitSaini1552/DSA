/* 
Write a code to calculate the min number of steps required to 
reduce the given number to 1 using following operations any number of times:
1 - reduce n to n-1 
2 - if n is divisible by 2 reduce n to n/2
3 - if n is divisible by 3 reduce n to n/3 
*/

#include<bits/stdc++.h>
using namespace std;
int f(int n, vector<int> &dp){
    if(n == 1) return 0;
    if(dp[n] != -1) return dp[n];
    return dp[n] = 1 + min({f(n-1,dp),(n % 2 == 0) ? f(n/2,dp) : (n % 3 == 0) ? f(n/3,dp) : INT_MAX});
}
int main(){
    int n;
    cin>>n;
    if(n <= 1){
        cout<<0;
        return 0;
    }
    vector<int> dp(n+1,-1);
    vector<int> dp2(n+1,-1);
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for(int i=3;i<=n;i++){
        dp[i] = 1 + min({dp[i-1],(i % 2 == 0) ? dp[i/2] : (i % 3 == 0) ? dp[i/3] :INT_MAX});
    }
    cout<<f(n,dp)<<endl;
    cout<<dp[n];
}