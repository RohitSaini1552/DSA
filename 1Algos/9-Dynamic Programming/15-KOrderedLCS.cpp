#include<bits/stdc++.h>
using namespace std;

int f(vector<int> &a, vector<int> &b, int m, int n, int i, int j, int k){
    if(i == m || j == n) return 0;
    int result = 0;
    if(a[i] == b[j]) result = 1 + f(a,b,m,n,i+1,j+1,k);
    else{
        if(k > 0){
            result = 1 + f(a,b,m,n,i+1,j+1,k-1);
        }
        // k <= 0
        result = max({result,f(a,b,m,n,i+1,j,k),f(a,b,m,n,i,j+1,k)});
    }
    return result;
}

int main(){
    int m, n, k;
    cin>>m>>n>>k;
    vector<int> a(m);
    vector<int> b(n);
    for(int i=0;i<m;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    cout<<f(a,b,m,n,0,0,k);
}