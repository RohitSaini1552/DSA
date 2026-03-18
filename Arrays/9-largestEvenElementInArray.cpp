// write a code to return the largest even element in an array of positive elements else return 0 if no even existed

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxEven = 0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0 && arr[i] > maxEven) maxEven = max(maxEven, arr[i]);
    }
    cout<<"Largest Even element in the given array is : "<<maxEven;
}