// this is based on tribonacci pattern because a max of 1,2 and 3 steps are allowed at a time.
// now we have to print the sequence path of the stairs that are possible

#include<iostream>
using namespace std;
int climbingStairs(int n){
    if(n<=0) return -1;
    else if(n<=2) return n;
    else if(n==3) return 4;
    else return climbingStairs(n-1)+climbingStairs(n-2)+climbingStairs(n-3);
}
void printPath(int n,string p){//n is the number of stairs left untill now
    if(n<0) return;
     if(n==0) {// when no stair is left to be climbed.....means all stairs are travelled then only print the sequence
        cout<<p<<endl;
        return;
    }
    printPath(n-1,p+"1");
    printPath(n-2,p+"2");
    printPath(n-3,p+"3");


}
int main(){
    int n;
    cout<<"Enter the number of stairs :";
    cin>>n;
    printPath(n,"");
}