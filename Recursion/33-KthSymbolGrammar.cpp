#include<bits/stdc++.h>
using namespace std;
int symbol(int n, int k,bool flag){
    if(n == 1){
        if(flag == true) return 0;
        else return 1;
    }
    if(k % 2 == 0) return symbol(n-1,k/2,!flag);
    if(k % 2 == 1) return symbol(n-1,(k/2)+1,flag);
}
int main(){
    int n, k;
    cin>>n>>k;
    bool flag = true;
    cout<<symbol(n,k,flag);
}