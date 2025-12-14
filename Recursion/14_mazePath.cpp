
#include<iostream>
using namespace std;
void printPath(int er,int ec,int sr,int sc,string p){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec){
        cout<<p<<endl;
    }
    printPath(er,ec,sr,sc+1,p+'R');
    printPath(er,ec,sr+1,sc,p+'D');

}
int main(){
    printPath(2,2,0,0,"");
}