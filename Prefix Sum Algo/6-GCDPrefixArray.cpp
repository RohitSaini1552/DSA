// Write a program to return a prefix GCD array



#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a== b) return a;
    if(a % b == 0 || a == 0) return b;
    return gcd(b,a % b);  
}

int main(){
    int arr[] = {12,18,24,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    v[0] = arr[0];
    for(int i=1;i<n;i++){
        v[i] = gcd(v[i-1],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}