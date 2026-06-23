class Solution {
public:
    int m,n;
    bool ans = false;
    vector<vector<int>> dir = {{0,-1},{-1,0},{0,1},{1,0}};

    bool isValid(vector<vector<char>>& board, string &word,int r,int c,int i){
        return r >= 0 && r < m && c >=0 && c < n && board[r][c] == word[i];
    }

        
        
    void check(vector<vector<char>> &board,string &word,int r,int c,int i){
        if(i == word.size() - 1){
            ans = true;
            return;
        }
        char ch = board[r][c];
        board[r][c] = '#';
        for(auto &d: dir){
            int nr = r + d[0];
            int nc = c + d[1];
            if(isValid(board,word,nr,nc,i+1)){
                check(board,word,nr,nc,i+1);
                // if(ans) return;
            } 
        }
        // i -= 1; only needed if i was pass by refrence
        board[r][c] = ch;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == word[0]) {
                    check(board,word,i,j,0);
                    if(ans) return true;
                }
            }
        }
        return false;

    }
};