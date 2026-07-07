// Sliding window code template for the fixed size window problem using bruteforce approach
// where maxSum is the maximum possible sum of a subarray and maxIdx is the starting index of that max sum subarray
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {7,1,2,5,8,4,9,3,6};
    int k = 4;
    int n = v.size();
    int maxSum = INT_MIN;
    int maxIdx = 0;
    for(int i=0;i<n-k+1;i++){
        int sum = 0; 
        for(int j=i;j<i+k;j++){
            sum += v[j];
        }
        if(maxSum < sum){
            maxSum = sum;
            maxIdx = i;
        }
    }
    cout<< "Maximum subarray sum of size "<< k <<" is "<< maxSum<<endl;
    cout<< "Maximum subarray starts from index "<< maxIdx;

}