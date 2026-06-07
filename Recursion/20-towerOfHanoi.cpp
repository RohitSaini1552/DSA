// Write a code to print the moves of n discs in tower of hanoi using recursion


#include<bits/stdc++.h>
using namespace std;
void hanoi(int n, char s, char h, char d){
    if(n == 0) return;
    hanoi(n-1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    hanoi(n-1,h,s,d);
}
int main(){
    int n = 2;
    hanoi(n,'A','B','C');
    /* 
    A = source
    B = helper
    C = destination 
    */
}