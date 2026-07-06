// using variables to track and mantain the running sum of an array


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    
    // Prefix Array
    vector<int> v(n);
    v[0] = arr[0];
    for(int i=1;i<n;i++){
        v[i] = arr[i] * v[i-1];
    }
    // Suffix Array
    int b = 1;
    for(int i=n-1;i>=0;i--){
        b *= arr[i];
        v[i] *= b;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}