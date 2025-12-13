#include<iostream>
using namespace std;
int pow(int x, int n){
    if(n==0) return 1;
    if(n==1) return x;
    double ans = x*pow(x,n-1);
    if(n>0) return ans;
    if(n<0) {
        n = -1 * n;
        return 1/(ans);
    } 
    return 1;
}
int main(){
    cout<<pow(2,-2);
}