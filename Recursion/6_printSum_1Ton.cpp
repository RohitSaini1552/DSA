// write a program to print sum of integers from 1 to n

#include<iostream>
using namespace std;
//M1:-. without extra parameter(reverse sum)==using return type
// int sum(int n){
//     if(n==0) return 0;
//     return n + sum(n-1);
// }
//M2 :-> without using extra parameter(order)
/*void sum(int n){
    if(n==0) return;
   //in this Qs we can not simply use answer after calling withiut using any extra parameter because the ans variable always initiate from 0
}*/
//M3 :-> using extra parameter
void sum1Ton(int n,int sum){
        if(n==0) {
            cout<<sum<<endl;
            return ;
        }
        sum1Ton(n-1,sum+n);
}
int main(){
    int n,ans;
    cout<<"Enter an integer : ";
    cin>>n;
    sum1Ton(n,0);
}