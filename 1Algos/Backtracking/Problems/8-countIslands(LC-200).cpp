class Solution {
public:
    int dir[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
    bool isSafe(int &m,int &n,int r,int c, vector<vector<char>> &grid){
        if(r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == '1') return true;
        return false;
    }
    void dfs(int &m,int &n,int r,int c,vector<vector<char>> &grid){
        grid[r][c] = '0';
        for(auto &x : dir){
            int nr = r + x[0];
            int nc = c + x[1];
            if(isSafe(m,n,nr,nc,grid))
                dfs(m,n,nr,nc,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '1'){
                    dfs(m,n,i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
};