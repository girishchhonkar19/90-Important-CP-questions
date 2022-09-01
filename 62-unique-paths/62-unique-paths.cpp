class Solution {
public:
    int uniquePaths(int m, int n) {
//         if(m == 0 && n == 0)
//             return 1;
//         if( m < 0 || n <0)
//             return 0;
        
//         return uniquePaths(m-1,n) + uniquePaths(m, n-1);
        
        vector<vector<int>>dp(m, vector<int>(n,0));
        
        dp[0][0] = 1;
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i-1 >= 0)
                    dp[i][j] += dp[i-1][j];
                if(j-1 >= 0)
                    dp[i][j] += dp[i][j - 1];
            }
        }
        return dp[m-1][n-1];
    }
};