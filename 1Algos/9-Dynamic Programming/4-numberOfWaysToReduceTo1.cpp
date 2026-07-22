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
    int ans1 = f(n-1,dp);
    int ans2 = INT_MAX;
    int ans3 = INT_MAX;
    if(n % 2 == 0) ans2 = f(n/2,dp);
    if(n % 3 == 0) ans3 = f(n/3,dp);
    return dp[n] = 1 + min({ans1,ans2,ans3});
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<f(n,dp);
}