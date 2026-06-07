// Write a code to find the maximum element of an array using recursion


#include<bits/stdc++.h>
using namespace std;
int maxEle(int arr[], int n, int &maximum){
    if(n == 0) return maximum; // otherwise index outof bound
    if(arr[n-1] > maximum) maximum = arr[n-1];
    maxEle(arr,n-1,maximum);
}
int maxInArray(int arr[],int n,int idx){
    if(idx == n) return INT_MIN;
    return (max(arr[idx], maxInArray(arr,n,idx+1)));
}
int main(){
    int arr[] = {51,42,33,24,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    /* int maximum = INT_MIN;
    cout<<maxEle(arr,n,maximum); */
    cout<<maxInArray(arr,n,0);
}