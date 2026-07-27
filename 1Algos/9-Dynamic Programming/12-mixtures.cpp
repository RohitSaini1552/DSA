#include<bits/stdc++.h>
using namespace std;

int g(int i, int j, vector<int> &v){
    int result = 0;
    for(int m = i; m <= j; m++){
        result = (result % 100 + v[m] % 100) % 100;
    }
    return result;
}

int f(int i, int j, vector<int> &v){
    if(i == j) return 0; // no smoke
    if(i + 1 == j) return v[i] * v[j]; // base case if only 2 colors are left(direct product)
    int ans = INT_MAX;
    for(int k = i; k < j; k++){
        ans = min(ans,f(i,k,v) + f(k+1,j,v) + g(i,k,v) * g(k+1,j,v));
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<f(0,n-1,v);
}