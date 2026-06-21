// Solution of Leetcode 1219 - Path withmaximum Gold



class Solution {
public:
    int maxGold = -1;
    bool canGo(int m,int n,int i,int j,vector<vector<int>> &grid){
        if((j > 0 && grid[i][j-1] != 0) || (i > 0 && grid[i-1][j] != 0) || (j < n-1 && grid[i][j+1] != 0) || (i < m-1 && grid[i+1][j] != 0)) return true;
        return false;
        
    }
    void check(int m,int n,int i,int j,int &ans,vector<vector<int>> &grid){
        int x = grid[i][j];
        grid[i][j] = 0;
        ans += x;
        if(!canGo(m,n,i,j,grid)){
            maxGold = max(ans,maxGold);
            grid[i][j] = x;
            ans -= x;
            return;
        }
        if(j > 0 && grid[i][j-1] != 0) check(m,n,i,j-1,ans,grid);
        if(i > 0 && grid[i-1][j] != 0) check(m,n,i-1,j,ans,grid);
        if(j < n-1 && grid[i][j+1] != 0) check(m,n,i,j+1,ans,grid);
        if(i < m-1 && grid[i+1][j] != 0) check(m,n,i+1,j,ans,grid);

        grid[i][j] = x;
        ans -= x;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] != 0){
                    int ans = 0;
                    check(m,n,i,j,ans,grid);
                }
            }
        }
        if(maxGold == -1) return 0;
        return maxGold;
        
    }
};