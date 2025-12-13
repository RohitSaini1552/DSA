// write a program to calculate a raised to the power b  

#include<iostream>
using namespace std;
int pow(int a,int b){
    if(a==0 && b==0){
        cout<<"Not Defined"<<endl;
        return 404;
    }
    if(a==0) return 0;
    if(a==1 || b==0) return 1;
    return a*pow(a,b-1);

}
int main(){
    int a,b;
    cout<<"Enter the values of base and exponent :";
    cin>>a>>b;
    cout<<pow(a,b);
}