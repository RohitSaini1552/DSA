// this is based on fibonacci pattern because a max of 1 or 2 steps are allowed at a time

#include<iostream>
using namespace std;
int climbingStairs(int n){
    if(n<=0) return -1;
    else if(n<=2) return n;
    else return climbingStairs(n-1) + climbingStairs(n-2);
}
int main(){
    int n;
    cout<<"Enter the number of stairs :";
    cin>>n;
    cout<<climbingStairs(n);
}