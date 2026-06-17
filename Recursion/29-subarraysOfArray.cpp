#include<bits/stdc++.h>
using namespace std;
void subarrays(vector<int> ans,int arr[],int i,int n){
    if(i == n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subarrays(ans,arr,i+1,n); // exlusive calls always without any condition
    if(ans.size() == 0 || ans.back() == arr[i-1]){ // inclusive calls only when either te ans vecor is empty or it is continous
        ans.push_back(arr[i]);
        subarrays(ans,arr,i+1,n);
    }
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    subarrays(ans,arr,0,n);
}

// M2 : using iterative approach
/* int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
} */