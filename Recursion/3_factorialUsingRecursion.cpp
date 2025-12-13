// write a program to calculate factorial using recursion

#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0) return 1;
    int ans = n*fact(n-1);
    // cout<<ans<<endl;
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<< fact(n);
}