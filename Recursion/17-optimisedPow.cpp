// write a code to calculate n raised to power of x in O(logn)


// DIVIDE and CONQUER
#include<bits/stdc++.h>
using namespace std;
double pow(int n, int x){
    if(x == 0 || n == 1) return 1;
    if(x == 1) return n;
    // for negative exponents-> make them to call to positive exponent by just making 1 call
    if(x < 0) return 1.0 / pow(n,-x);
    // divide the exponents into halves everytime to reduce number of operations(recursive calls)
    double half = pow(n,x/2);
    // if the exponent is already even
    if(x % 2 == 0) return half * half;
    // if its odd -> then it will have an extra multiple of n since fractional part is lost during division by 2
    else return n * half * half;
}
int main(){
    cout<<pow(2,-2);
}