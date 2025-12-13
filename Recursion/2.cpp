// print "good Morning" for n times where n is the user input 

#include<iostream>
using namespace std;
void greet(int n){
    if(n==0) return;
    cout<<"Good Morning"<<endl;
    greet(n-1);
}
int main(){
    int n;
    cout<<"Enter an integer :";
    cin>>n;
    greet(n);

}