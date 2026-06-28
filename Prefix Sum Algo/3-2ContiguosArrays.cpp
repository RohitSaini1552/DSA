#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> pre(n);
    pre[0] = arr[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1] + arr[i];
    }
    int idx = -1;
    for(int i=0;i<n;i++){
        if(pre[i] == (pre[n-1] - pre[i])){
            idx = i;
            break;
        } 
    }
    cout<<idx;
    
}
