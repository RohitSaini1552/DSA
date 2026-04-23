// Sliding window code template for the fixed size window problem

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {7,1,2,5,8,4,9,3,6};
    int k = 4;
    int n = v.size();
    int sum = 0;
    for(int i=0;i<k;i++){
        sum += v[i];
    }
    int maxSum = sum;
    int maxIdx = 0;
    for(int i=1;i<=n-k;i++){
        sum = sum + v[i+k-1] - v[i-1];
        if(sum > maxSum){
            maxSum = sum;
            maxIdx = i;
        }
    }
    cout<< "Maximum subarray sum of size "<< k <<" is "<< maxSum<<endl;
    cout<< "Maximum subarray starts from index "<< maxIdx;

}