#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {7,1,2,5,8,4,9,3,6};
    int k = 4;
    int n = v.size();
    int prevSum = 0;
    for(int i=0;i<k;i++){
        prevSum += v[i];
    }
    int maxSum = prevSum;
    int maxIdx = 0;
    for(int i=1;i<=n-k;i++){
        int currSum = prevSum + v[i+k-1] - v[i-1];
        if(currSum > maxSum){
            maxSum = currSum;
            maxIdx = i;
        }
        prevSum = currSum;
    }
    cout<< "Maximum subarray sum of size "<< k <<" is "<< maxSum<<endl;
    cout<< "Maximum subarray starts from index "<< maxIdx;

}