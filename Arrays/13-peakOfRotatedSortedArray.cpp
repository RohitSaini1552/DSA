#include<iostream>
using namespace std;
int main(){
    int arr[7] = {5, 6, 8, 7, 2, 3, 4};
    int size = 7;
    // M1 :- using linear search

    /* int peak = -1;
    for(int i=1;i<size;i++){
        if(arr[i-1] <= arr[i] && arr[i] >= arr[i+1]){// = sign is for duplicates edge cases
            peak = i;
            break;
        } 
    }
    cout<<"Peak Index is : "<<peak; */

    // M2 :- using binary search

    int left = 0;
    int right = size - 1;
    int ans = -1;
    while(left <= right){
        int mid = right + (left - right)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) ans = mid;
        else if(arr[mid] < arr[mid+1]) left = mid + 1;
        else if(arr[mid] < arr[mid-1]) right = mid - 1;
    }
    cout<<"Peak in the mountain array is : "<<ans;
}