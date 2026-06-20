// Write a code to print all possible of solutions of N Queen problem


#include<bits/stdc++.h> 
using namespace std;

int n = 4;
vector<vector<char>> board(n,vector<char>(n,'.'));
string s = "";

bool canPlaceQueen(int row,int col){
    // col check
    for(int i=row;i>=0;i--){
        if(board[i][col] == 'Q') return false;
    }
    //left Diagonal
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j] == 'Q') return false;
    }
    // right dagonal check
    for(int i=row-1,j=col+1;i>=0 && j<=n-1;i--,j++){
        if(board[i][j] == 'Q') return false;
    }
    return true; // No attacks on Queen
}

void f(int n,int i){
    if(i == n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                s += board[i][j];
            }
            if(i != n-1) s += ',';
        }
        cout<<s<<endl;
        s.clear();
        return;
    }
    for(int j=0;j<n;j++){
        if(canPlaceQueen(i,j)){
            board[i][j] = 'Q';
            f(n,i+1);
            board[i][j] = '.';
        }
    }
}
int main(){ 
    f(n,0);
}