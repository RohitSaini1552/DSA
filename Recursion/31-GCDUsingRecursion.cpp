#include<bits/stdc++.h>
using namespace std;

// M1 : Iterative approach
int gcd(int a,int b){
    for(int i=min(a,b);i>=2;i--){
        if(a % i == 0 && b % i == 0) return i;
    }
    return 1;
}

// M2 : Recursive approach
int gcd(int a,int b,int i){
    // if(i < 2) return 1;
    if(a % i == 0 && b % i == 0) return i;
    return gcd(a,b,i-1);
}
 // M3 : Using euclid division lemma
 int hcf(int a,int b){
    if(a == b) return a;
    if(a > b){
        if(a % b == 0) return b;
        else return(b,a % b);
    }
    /* else{
        if(b % a == 0) return a;
        else return(a,b % a);
    } */
   else return hcf(b,a);
    return 1;
 }

int main(){
    cout<<gcd(24,60,24)<<endl;
    cout<<hcf(24,60)<<endl;
}