//Write code for the conventional Selection sort to print array in reverse sorted manner:
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6] = {21,3,-1,6,154,4};
    int n = 6;
    for(int i=0;i<n-1;i++){
        int max = INT_MIN;
        int maxdx = -1;
        for(int j=i;j<n;j++){
            if(arr[j]>max){
                max = arr[j];
                maxdx = j;
            }
        }
        swap(arr[i],arr[maxdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}