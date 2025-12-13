#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[] = {2,31,4,6,5,1};
    bool sorted = true;
    int swaps = 0; //to count no. of swaps
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps++;
                sorted = false;
            } 
        }
        if(sorted==true)break;
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;

    // to display no of swaps taken place in this code
    cout<<"No. of swaps in this case : "<<swaps;
}
