class Solution {
public:
    vector<vector<int>>dp;
    int traversal(int r,int c,vector<vector<int>>& grid){
      int n=grid.size();
      int m=grid[0].size();
      if(r==n-1&&c==m-1){
        return grid[r][c];
      }
      if(dp[r][c]!=-1)return dp[r][c];
      if(r+1>=n){
        dp[r][c]=grid[r][c]+traversal(r,c+1,grid);
      }
      else if(c+1>=m){
        dp[r][c]=grid[r][c]+traversal(r+1,c,grid);
      }
      else{
      dp[r][c]=min(grid[r][c]+traversal(r,c+1,grid),grid[r][c]+traversal(r+1,c,grid));
      }
      return dp[r][c];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        dp.assign(n,vector<int>(m,-1));
        return traversal(0,0,grid);
    }
};