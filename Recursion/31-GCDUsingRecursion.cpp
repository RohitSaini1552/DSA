#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    for(int i=min(a,b);i>=2;i--){
        if(a % i == 0 && b % i == 0) return i;
    }
    return 1;
}
int main(){
    cout<<gcd(24,60)<<endl;
}