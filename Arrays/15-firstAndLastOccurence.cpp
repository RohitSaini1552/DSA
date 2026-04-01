 /* write a code to return the first and last occurence
    of a target value in an array */

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
int firstOccurence(int a[], int n, int x){
    int idx = -1;
    for(int i=0;i<n;i++){
        if(a[i] == x) {
            idx = i;
            break;
        }
    }
    return idx;
}
int lastOccurence(int a[], int n, int x){
    int idx = -1;
    for(int i=0;i<n;i++){
        if(a[i] == x) idx = i;   
    }
    return idx;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : ";
    input(a,n);
    cout<<"Given array is : ";
    output(a,n);
    int x;
    cout<<"Enter target value : ";
    cin>>x;
    cout<<"first occurence of "<<x<<" is : "<< firstOccurence(a,n,x)<<endl;
    cout<<"last occurence of "<<x<<" is : "<< lastOccurence(a,n,x);


}