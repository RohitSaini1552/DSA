//Implement bubble ort using reversing the iterator conditions:

#include<iostream>
using namespace std;
int main(){
    int arr[6] = {6,5,4,3,2,1};
    int n = 6;
    bool sorted = true;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1-i;j>=0;j--){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted = false;
            }
        }
        if(sorted==true);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}