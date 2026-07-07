#include<bits/stdc++.h>
using namespace std;
int dir[8][2] = {{-1,2},{-2,1},{1,2},{2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
bool isSafe(int r,int c,int n,vector<vector<int>> &board){
    if(r >= 0 && r < n && c >= 0 && c < n && board[r][c] == 0) return true;
    return false;
}

void knight(int n,int i,int j,int count,vector<vector<int>> &board){
    board[i][j] = count;
    if(count == n * n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"***********************************************"<<endl;
        board[i][j] = 0; // to print all possible paths in a n*n grid
        return;
    }
    for(auto &x : dir){
        int nr = i + x[0], nc = j + x[1];
        if(isSafe(nr,nc,n,board)){
            knight(n,nr,nc,count+1,board);
        }   
    }
    board[i][j] = 0;
}


int main(){
    int n;
    cin>>n;
    vector<vector<int>> board(n,vector<int>(n,0));
    int count = 1;
    knight(n,0,0,count,board);

}