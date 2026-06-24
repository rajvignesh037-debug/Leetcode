class Solution {
public:
    vector<vector<int>> dp;

    int count(int m, int n, int i, int j) {
        if(i >= m || j >= n) return 0;
        if(i == m - 1 && j == n - 1) return 1;

        if(dp[i][j] != -1) return dp[i][j];

        return dp[i][j] =
            count(m, n, i + 1, j) +
            count(m, n, i, j + 1);
    }

    int uniquePaths(int m, int n) {
        dp.assign(m, vector<int>(n, -1));
        return count(m, n, 0, 0);
    }
};