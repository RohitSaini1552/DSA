#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The elements of array are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}