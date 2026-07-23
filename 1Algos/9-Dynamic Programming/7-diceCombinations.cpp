#include<bits/stdc++.h>
using namespace std;
int f1(int n){
    if(n <= 1) return 1;
    int x = 1;
    int ans = 0;
    while(x <= 6 && x <= n){
        ans = ans + f1(n-x);
        x++;
    }
    return ans % 1000000007;
}
int f2(int n){
    if(n == 0) return 1;
    int ans = 0;
    for(int i=1;i<=6;i++){
        if(n - i < 0) break;// since i is increasing no emaning
        ans += f2(n - i);
    }
    return ans % 1000000007;
}
int main(){
    int n;
    cin>>n;
    cout<<f1(n)<<" "<<f2(n);
}