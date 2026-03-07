//write a code to return the number of elements inan array greater than target

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
int countGreater(int a[], int n, int x){
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i] > x) count++;
    }
    return count;
}
int main(){
    int n,x;
    cout<<"Enter target value : ";
    cin>>x;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : ";
    input(a,n);
    cout<<"The elements of array are : ";
    output(a,n);
    cout<<"No. of element greater than "<<x<<"\t is : "<<countGreater(a,n,x);
    
    
}