#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i] = x;
    }
    // M1 : using extra array
    /* 
    vector<int> pre(n);
    pre[0] = v[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1] + v[i];
    } 
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    */
    // M2 : without using extra space
    for(int i=1;i<n;i++){
        v[i] += v[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}



