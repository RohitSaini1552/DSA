//write a code to return the second minimum of all the elements of an array 

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
int Min(int a[], int n){
    int minElement = INT_MAX;
    for(int i=0;i<n;i++){
        ((minElement > a[i])? minElement = a[i] : minElement);
    }
    return minElement;
}
int secondMin(int a[], int n){
    int smin = INT_MAX;
    int min = Min(a,n);
    for(int i=0;i<n;i++){
        if(a[i] != min && a[i] < smin) smin = a[i];
    }
    return smin;
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
    cout<<"Minimum element in the given array is : "<<Min(a,n)<<endl;
    cout<<"The second Minimum in the given array is : "<<secondMin(a,n);
    
    
}