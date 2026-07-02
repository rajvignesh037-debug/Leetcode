class Solution {
public:
    vector<vector<bool>>vis;
    vector<vector<int>>dp;
    int traversal(int r,int c,vector<vector<int>>& triangle){
        if(vis[r][c])return dp[r][c];
        int n=triangle.size();
        if(r==n-1){
            vis[r][c] = true;
            return dp[r][c]=triangle[r][c];
            }
        vis[r][c] = true;
        dp[r][c]=triangle[r][c]+min(traversal(r+1,c,triangle),traversal(r+1,c+1,triangle));
        return dp[r][c];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        dp.assign(n, vector<int>());
        vis.assign(n,vector<bool>());
        for (int i = 0; i < n; i++) {
            dp[i].assign(triangle[i].size(), -1);
            vis[i].assign(triangle[i].size(),false);
            }
        return traversal(0,0,triangle);
    }
};