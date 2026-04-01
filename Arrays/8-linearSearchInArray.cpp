#include<iostream>
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
/* optimised code for linear search in an array  by using a bool chechmark 
and break statement for avoiding unnecessary iterations */
int linearSearch(int a[], int n, int x){
    int index = -1;
    for(int i=0;i<n;i++){
        if(a[i] == x){
            index = i;
            break;
        }
    }
    return index;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int x;
    cout<<"Enter the target element to be searched : ";
    cin>>x;
    int a[n];
    cout<<"Enter the elements of array : ";
    input(a,n);
    cout<<"The elements of array are : ";
    output(a,n);
    int idx = linearSearch(a,n,x);
    if(idx == -1) cout<<"404 !, Target NOT FOUND";
    else cout<<"Target element in present at index : "<<idx;
}