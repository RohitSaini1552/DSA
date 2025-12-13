// write a program to print 1 to n using recursion using extra parameter



#include<iostream>
using namespace std;
//M1 :-> using extra parameter
/*
void print(int i,int n){
    if(i>n) return; 
    cout<<i<<endl;
    print(i+1,n);
} 
*/

//M2 :-> without extra parameter


void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;

}

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    print(n);
}


