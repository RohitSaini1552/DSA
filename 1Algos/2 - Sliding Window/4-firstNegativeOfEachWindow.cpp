#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,-3,4,4,-7,-1,4,-2,6};
    int n = v.size();
    int k;
    cin>>k;
    int p = -1;
    for(int i=0;i<k;i++){
        if(v[i] < 0){
            p = i;
            break;
        }
    }
    vector<int> ans(n-k+1);
    if(p != -1) ans[0] = v[p];
    else ans[0] = 0;
    int i = 1;
    int j = k;
    while(j < n){
        if(p >= i && p <= j) ans[i] = v[p];
        else{
            p = i;
            ans[i] = 0;
            while(p <= j){
                if(v[p] < 0){
                    ans[i] = v[p];
                    break;
                } 
                p++; 
            }
        }
        i++;
        j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}