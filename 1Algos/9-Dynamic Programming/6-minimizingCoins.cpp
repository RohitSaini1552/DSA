#include<bits/stdc++.h>
using namespace std;
int f1(int x, vector<int> &coins){
    if(x < 0) return INT_MAX;
    if(x == 0) return 0;
    int ans = INT_MAX;
    for(auto &a : coins){
        ans = min(ans,f1(x-a,coins));
    }
    return 1 + ans;
}

int f2(int x, vector<int> &coins){
    if(x == 0) return 0;
    int ans = INT_MAX;
    for(auto &a : coins){
        if(a > x) continue;
        ans = min(ans,f2(x-a,coins));
    }
    return 1 + ans;
}

int main(){
    int x;
    cin>>x;
    vector<int> coins = {1,5,7};
    cout<<f1(x,coins)<<" "<<f2(x,coins);
}