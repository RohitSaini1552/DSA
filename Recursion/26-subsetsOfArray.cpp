// Write a code to print all the subsets of a given array using recursion


#include<bits/stdc++.h>
using namespace std;
void printSubsets(int arr[],int n,vector<int>v,int i){
    if(i == n){
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
        return;
    }
    printSubsets(arr,n,v,i+1);//call1 to exclude current element
    v.push_back(arr[i]);//include that element
    printSubsets(arr,n,v,i+1);//call2 to include that current element

    //call1 and call2 are different
}

/* M2 : Backtracking
*/
void printsubsets(int arr[],int n,vector<int>v,int i){
    if(i == n){
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
        return;
    }
    v.push_back(arr[i]); // to include current element
    printsubsets(arr,n,v,i+1);//call to move next
    v.pop_back();// to exclude the current element by pop back
    printsubsets(arr,n,v,i+1);
} 
int main(){
    int arr[] = {21,32,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    // printSubsets(arr,n,v,0);
    printsubsets(arr,n,v,0);

}