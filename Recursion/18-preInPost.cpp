// Write a code to demonstrate the behaviour of recursion when multiple recursive calls are made in asingle function

#include<bits/stdc++.h>
using namespace std;

void pip(int n){
    if(n == 0) return;
    cout<<"Pre "<<n<<endl;
    pip(n - 1);
    cout<<"In "<<n<<endl;
    pip(n - 1);
    cout<<"Post "<<n<<endl;
}

int main(){
    cout<<endl;
    pip(3);
    cout<<endl;
}