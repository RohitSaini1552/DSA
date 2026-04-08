//write a code to copy elements of an array into another array in reverse order 

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
    // copy elemetns of this array into another array
    vector<int> b(n);
    int i = 0;
    int j = (n - 1) - i;
    while(j >= 0){
        b[j] = a[i];
        i++;
        j--;
    }
    cout<<"reversed order : ";
    output(b,n);
    
    
}