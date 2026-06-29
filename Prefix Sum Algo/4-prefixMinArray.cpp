// Write a program to return a prefix min array



#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,3,8,2,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    v[0] = arr[0];
    for(int i=1;i<n;i++){
        v[i] = min(v[i-1],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}