// Write a code to print the value of 'a' raised to power 'b' (b can be positive as well as negative)

// case 1 : when both n and x are positive

/* #include<bits/stdc++.h>
using namespace std;
int pow(int n, int x){
    if(x == 0) return 1;
    if(x == 1 || n == 1) return n;
    return n * pow(n,x-1);
}
int main(){
    cout<<pow(2,3);
} */



// Case 2 : when x and n can be positive or neative

#include<bits/stdc++.h>
using namespace std;
double pow(int n, int x){
    if(x == 0) return 1;
    if(x == 1) return n;
    if(n == 1) return 1;
    if(x > 0) return n * pow(n,x-1);
    else return 1.0 / (pow(n,-x));
}
int main(){
    cout<<pow(5,-2);
}