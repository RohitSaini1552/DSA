//write a code to print Kth smallest element of an array 

#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;
void input(vector<int>a, int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void output(vector<int>a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    } 
    cout<<endl;
}
int Max(vector<int>a, int n){
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
    vector<int>a;
    cout<<"Enter the elements of array : ";
    input(a,n);
    cout<<"The elements of array are : ";
    output(a,n);
    sort(a.begin(), a.end());
    int k;
    cout<<"Enter the Kth smallest : ";
    cin>>k;
    cout<<"Kth smallest element in the given array is : "<< a[k-1];
    
}