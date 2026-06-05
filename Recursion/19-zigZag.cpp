//Write a code to print zig zag pattern

/* 
INPUT    OUTPUT
1        111
2        211121112
3        321112111232111211123
 */



#include<bits/stdc++.h>
using namespace std;
void zigZag(int n, string &ans){
    if(n == 0) return;
    ans += (n + '0');
    zigZag(n-1,ans);
    ans += (n + '0');
    zigZag(n-1, ans);
    ans += (n + '0');
}
int main(){
    string s = "";
    zigZag(2,s); // 211121112
    cout<<s<<endl;
}