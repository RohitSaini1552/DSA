// Write a code to print the factorials of all numbers from 1 to n using recursion

/* #include<bits/stdc++.h>
using namespace std;
int fact = 1;
void factUpTo(int i,int n){
    if(i > n) return;
    fact *= i;
    cout<<fact<<endl;
    factUpTo(i+1,n);
}
int main(){
    factUpTo(1,5);
} */

// M2 : using eeexxtra paramteters
/* #include<bits/stdc++.h>
using namespace std;
void factUpTo(int i, int fact, int n){
    if(i > n) return;
    fact *= i;
    cout<<fact<<endl;
    factUpTo(i+1,fact,n);
}
int main(){
    factUpTo(1,1,5);
} */


// M3 : using int return type

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 1) return 1;
    return n * fact(n - 1);
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fact(i)<<endl;
    }
}