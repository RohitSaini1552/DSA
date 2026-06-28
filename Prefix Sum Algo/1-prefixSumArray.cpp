// Write a program to print the elements of prefix sum array
 
/* TC = O(n2);
since here we are doing i operations for each query of ith index*/

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
    vector<int> pre(n);
    for(int i=0;i<n;i++){
        int x = 0;
        for(int j=0;j<=i;j++){
            x += v[j];
        }
        pre[i] = x;
    }
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
}