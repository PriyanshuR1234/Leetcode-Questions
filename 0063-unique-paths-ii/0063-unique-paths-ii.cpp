class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        
        
        if (obstacleGrid[0][0] == 1 || obstacleGrid[n - 1][m - 1] == 1) return 0;

        
        vector<vector<long long>> ans(n, vector<long long>(m, 0));

        
        for (int j = 0; j < m; j++) {
            if (obstacleGrid[0][j] == 1) break; 
            ans[0][j] = 1;
        }

       
        
        for (int i = 0; i < n; i++) {
            if (obstacleGrid[i][0] == 1) break; 
            ans[i][0] = 1;
        }

        
        for (int r = 1; r < n; ++r) {
            for (int c = 1; c < m; ++c) {
                
                if (obstacleGrid[r][c] == 1) {
                    ans[r][c] = 0;
                } else {
                    
                    ans[r][c] = ans[r - 1][c] + ans[r][c - 1];
                }
            }
        }

        return ans[n - 1][m - 1]; 
        


    }
};