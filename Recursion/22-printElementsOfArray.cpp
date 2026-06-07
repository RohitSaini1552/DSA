// Write a code to print all the elements of an array using recursion


// M1: without using extra arguments
#include<bits/stdc++.h>
using namespace std;
void printElements(int arr[],int n){
    if(n == 0) return;
    printElements(arr,n-1);
    cout<<arr[n-1]<<" ";
}
int main(){
    int arr[5] = {51,42,33,24,15};
    int n =sizeof(arr)/sizeof(arr[0]);
    printElements(arr,n);
}




//M2 : using extra arguments