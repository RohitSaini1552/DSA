class Solution {
public:
    int dir[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
    bool isSafe(int &m,int &n,int r,int c, vector<vector<int>> &grid){
        if(r >= 0 && r < m && c >= 0 && c < n && grid[r][c] > 0) return true;
        return false;
    }
    void dfs(int &m,int &n,int r,int c,vector<vector<int>> &grid,long long &sum){
        sum += grid[r][c];
        grid[r][c] = 0;
        for(auto &x : dir){
            int nr = r + x[0];
            int nc = c + x[1];
            if(isSafe(m,n,nr,nc,grid))
                dfs(m,n,nr,nc,grid,sum);
        }
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] > 0){
                    long long sum = 0;
                    dfs(m,n,i,j,grid,sum);
                    if(sum % k == 0) count++;
                }
            }
        }
        return count;
    }
};

