//write a code to return second maximum of all the elements of an array 

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
int secondMax(int a[], int n){
    int secondMax = INT_MIN;
    int max = Max(a,n);
    for(int i=0;i<n;i++){
        if(a[i] != max && secondMax < a[i]) secondMax = a[i];
    }
    return secondMax;
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
    int max = Max(a,n);
    cout<<"Maximum element in the given array is : "<<max<<endl;
    cout<<"Second Max of the given array is : "<<secondMax(a,n);
    
}