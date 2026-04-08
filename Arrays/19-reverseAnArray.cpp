//write a code to reverse an array inplace

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
    // swap elements of array that are equidistant from begin and end index
    int l = 0;
    int r = a.size() - 1;
    while(l < r){
        swap(a[l], a[r]);
        l++;
        r--;
    }
    cout<<"reversed order : ";
    output(a,n);
    
    
}