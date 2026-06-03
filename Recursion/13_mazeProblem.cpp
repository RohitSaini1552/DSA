/* Write a code to calculate the total possible paths in a m*n grid maze 
where only Right and down moves are allowed.
also prints all the path*/

#include<iostream>
using namespace std;
int maze(int er,int ec,int sr,int sc){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(er,ec,sr,sc+1);
    int downWays = maze(er,ec,sr+1,sc);
    return rightWays + downWays;

}
void printPath(int er,int ec,int sr,int sc,string p){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec){
        cout<<p<<endl;
    }
    printPath(er,ec,sr,sc+1,p+'R');
    printPath(er,ec,sr+1,sc,p+'D');

}
void printPath2(int er,int ec,string s){
    if(er < 1 || ec < 1) return;
    if(er == 1 && ec == 1) cout<<s<<endl;
    printPath2(er-1,ec,s+'R');
    printPath2(er,ec-1,s+'D');
}
int main(){
    cout<<maze(2,2,1,1)<<endl;
    // printPath(2,2,0,0,"");
    printPath2(2,2,"");
}