//function callin itself

#include<iostream>
using namespace std;

void greet(int n){
    if(n==1) return; // base case is the termination condition of a recursion call
    cout<<"Hello Dear"<<endl;
    greet(n-1); // this will leads to a segmentation fault -> infinite loop -> to prevent this.....we se base condition
}
int main(){
    greet(7);

}
