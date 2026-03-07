//write a code to return maximum of all the elements of an array 

#include<iostream>
#include<climits>

using namespace std;
void input(int a[], int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void output(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    } 
    cout<<endl;
}
int Max(int a[], int n){
    int maxElement = INT_MIN;
    for(int i=0;i<n;i++){
        ((maxElement < a[i])? maxElement = a[i] : maxElement);
    }
    return maxElement;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : ";
    input(a,n);
    cout<<"The elements of array are : ";
    output(a,n);
    cout<<"Maximum element in the given array is : "<<Max(a,n);
    
    
}