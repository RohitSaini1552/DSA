// Write a program to print n to 1 using recursion

#include<iostream>
using namespace std;
// int show(int n){
//     if(n==1) return 1;
//     cout<<n<<endl;
//     return show(n-1);
    //in int return type always use cout
// }

void show(int n){
    if(n==0) return;
    cout<<n<<endl;
    return show(n-1);
    // in void no need to use cout
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    show(n);
}

