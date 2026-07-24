#include<bits/stdc++.h>
using namespace std;

// Changed parameter to vector<int>& to avoid type mismatch with -1
int f(int n, int k, int l, vector<int> &dp){
    if(n <= 0) return 0;// already picked coins by your opponent and you loose
    if(n == 1 || n == k || n == l) return 1; // you got base cases you willd efinetly pick and win
    if(dp[n] != -1) return dp[n];
    
    int ans1 = (n - 1 >= 0) ? f(n-1,k,l,dp) : 1; // if out of bound means your opponent give you 0 coins -> you lost 
    int ans2 = (n - k >= 0) ? f(n-k,k,l,dp) : 1; //more than 1 and fewer than k coins left for you
    int ans3 = (n - l >= 0) ? f(n-l,k,l,dp) : 1; // more coins than 1 but fewer coins then l are remaining for you
    
    // CRITICAL FIX: Stored the result in dp[n] before returning
    return dp[n] = !(ans1 && ans2 && ans3);
    // did 1 to return as answers in ans1,2 and 3 because they will not have influence on the final answer in boolean and
}

int main(){
    int m;
    cin>>m;
    int k,l;
    cin>>k>>l;
    vector<int> arr(m);
    int M = INT_MIN;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        if(arr[i] > M) M = arr[i];
    }
    
    // Local dp array matching the vector<int>& parameter
    vector<int> dp(M+1, -1);
    
    string s = "";
    for(int i=0;i<m;i++){
        int n = arr[i];
        if(f(n,k,l,dp)) s += 'A';
        else s += 'B';
    }
    cout<<s<<endl;
    return 0;
}