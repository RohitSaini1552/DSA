#include<bits/stdc++.h>
using namespace std;

vector<int> getDigits(int n){
    vector<int> v;
    while(n > 0){
        int d = n % 10;
        if(d != 0) v.push_back(d);
        n /= 10;
    }
    return v;
}
int f(int n){
    if(n == 0) return 0;
    if(n > 0 && n <= 9) return 1;
    vector<int> v = getDigits(n);
    int ans = INT_MAX;
    for(auto &x : v){
        ans = min(ans,f(n - x));
    }
    return 1 + ans;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}