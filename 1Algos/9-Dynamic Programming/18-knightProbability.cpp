class Solution {
public:
    double dp[30][30][105];
    int dir[8][8] = {{2,1},{1,2},{-1,2},{-2,1},{1,-2},{2,-1},{-1,-2},{-2,-1}};
    double f(int &n,int k,int r,int c){
        // Base cases
        if(r < 0 || c < 0 || r >= n || c >= n) return 0;// outside the chessboard doesnt mater how much moves left
        if(k == 0) return 1; // all moves exhausted and still inside the chessboard
        if(dp[r][c][k] > -1) return dp[r][c][k];
        // Recursive cases
        double ans = 0;
        for(auto &d : dir){
            int nr = r + d[0];
            int nc = c + d[1];
            ans = ans + (f(n,k-1,nr,nc) * 0.125);
        }
        return dp[r][c][k] = ans;
    }
    double knightProbability(int n, int k, int row, int column) {
        memset(dp,-1.0,sizeof dp);
        return f(n,k,row,column);
    }
};