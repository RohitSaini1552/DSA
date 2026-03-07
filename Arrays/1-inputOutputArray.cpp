//write a program to take input an array and the display its elements

#include<iostream>
using namespace std;
int main(){
    int a[7];
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
}