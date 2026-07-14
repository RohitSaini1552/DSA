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
    int i = 1;
    int j = k;
    int maxSum = sum;
    int maxIdx = 0;
    while(j < n){
        sum = sum - v[i-1] + v[j];
        if(sum > maxSum){
            maxSum = sum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    cout<< "Maximum subarray sum of size "<< k <<" is "<< maxSum<<endl;
    cout<< "Maximum subarray starts from index "<< maxIdx;

}