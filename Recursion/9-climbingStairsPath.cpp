/* Write a code to calculate total possible path to climb n stairs when 
maximum of 1,2 or 3 steps are allowed at a time
also print the path of stairs climb at each step to reach n th stair */


#include<bits/stdc++.h>
using namespace std;
int stair(int n){
    if(n <= 2) return n;
    if(n == 3) return 4;
    return stair(n-1) + stair(n-2) + stair(n-3);
}
void stairPath(int n,string s){
    if(n < 0) return;
    if(n == 0){
        cout<<s<<endl;
    }
    stairPath(n-1,s+'1');
    stairPath(n-2,s+'2');
    stairPath(n-3,s+'3');
}
int main(){
    cout<<stair(5)<<endl;
    stairPath(5,"");
}