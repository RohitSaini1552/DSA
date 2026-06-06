// Write code to print the nth fibonacci term using recursion where 1st and 2nd terms are 1

#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n == 1 || n == 2) return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main(){
    cout<<fibo(8);
}