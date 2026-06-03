/* Write a code to calculate total possible paths to reach to destination cell starting from 1,1 position
also prints the path of steps taken
 */


#include<iostream>
using namespace std;
int mazePath(int er,int ec,string s){//we can pass the same string witht the refrence too but then we have to use backtracking to explore other choices in the path too
    if(er < 1 || ec < 1) return 0;
    if(er == 1 && ec == 1){
        cout<<s<<endl; // int this method each recursive path to destination shares and modifies the same string
         return 1;
    }
    return mazePath(er - 1,ec,s+'R') + mazePath(er,ec-1,s+'D');

}
int main(){
    string s = "";
    cout<<mazePath(2,2,s)<<endl;
}