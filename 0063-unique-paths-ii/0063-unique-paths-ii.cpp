class Solution {
public:
    vector<vector<int>>dp;
    int count(int i,int j,vector<vector<int>>& obstacleGrid){
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(i>=n||j>=m||obstacleGrid[i][j]==1)return 0;
        if(i==n-1&&j==m-1)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        dp[i][j]=count(i+1,j,obstacleGrid)+count(i,j+1,obstacleGrid);
        return dp[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        dp.assign(n,vector<int>(m,-1));
        return count(0,0,obstacleGrid);
    }
};