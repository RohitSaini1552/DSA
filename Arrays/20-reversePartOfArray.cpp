//write a code to reverse a part an array inplace

#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
void input(vector<int> &a, int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
}
void output(vector<int>a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    } 
    cout<<endl;
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
    // swap elements of array that are lying in the given range
    int l, r;
    cout<<"enter the range of indices to be reversed :";
    cin>>l>>r;
    while(l < r){
       int temp = a[l];
       a[l] = a[r];
       a[r] = temp;
       l++;
       r--;
    }
    cout<<"reversed order : ";
    output(a,n);
    
    
}