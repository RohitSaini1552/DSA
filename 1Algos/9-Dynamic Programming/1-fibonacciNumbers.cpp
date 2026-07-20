// Write a code to print Nth fibonacci number using DP

#include<bits/stdc++.h>
using namespace std;
int fibo1(int n, vector<int> &dp1){
    if(n == 0 || n == 1) return n;
    if(dp1[n] != -1) return dp1[n];
    return dp1[n] = fibo1(n-1, dp1) + fibo1(n-2, dp1);
}

int main(){
    int n = 5;
    vector<int> dp1(n+1,-1);
    if(n == 0 || n == 1) return n;
    vector<int> dp2(n+1,-1);
    dp2[0] = 0;
    dp2[1] = 1;
    for(int i=2;i<=n;i++){
        dp2[i] = dp2[i-1] + dp2[i-2];
    }
    cout<<dp2[n]<<endl;
    cout<<fibo1(5,dp1);
}