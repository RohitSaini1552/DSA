// using log and mod optimisations as required for the prefix product array


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
    
    // M1 : without using extra space
    for(int i=1;i<n;i++){
        v[i] *= v[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}