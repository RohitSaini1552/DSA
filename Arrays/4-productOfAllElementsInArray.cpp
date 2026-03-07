//write a code to calculate the product of all the elements of an array 

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
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : ";
    /* for(int i=0;i<n;i++){
        cin>>a[i];
    } */
    input(a,n);
    cout<<"The elements of array are : ";
    /* for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }  */
   output(a,n);
    int product = 1;
    for(int i=0;i<n;i++){
        product *= a[i];
    }
    cout<<endl;
    cout<<"product of all elements in given array : "<<product;
}