class Solution {
public:
    // int  recurse( vector<vector<int>> & grid, int row, int col,vector<vector<int>>& memo)
    // {
        
    //      if(row==grid.size()-1 && col==grid[0].size()-1)
    //     {
    //         return grid[row][col];
    //     }

    //     if(memo[row][col]!=-1)
    //     {
    //         return memo[row][col];
    //     }

    //     if(row==grid.size()-1)
    //     {
    //         memo[row][col]=grid[row][col]+recurse(grid,row,col+1,memo);
    //         return grid[row][col]+recurse(grid,row,col+1,memo);
    //     }

    //     if(col==grid[0].size()-1)
    //     {
    //         memo[row][col]=grid[row][col]+recurse(grid,row+1,col,memo);
    //         return grid[row][col]+recurse(grid,row+1,col,memo);
    //     }

    //     int below=recurse(grid,row+1,col,memo);
    //     int right=recurse(grid,row,col+1,memo);

    //     memo[row][col]= grid[row][col]+min(below,right);
    //     return grid[row][col]+min(below,right);

       

    // }
    int minPathSum(vector<vector<int>>& grid) {
        //recursion with memorization
        // vector<vector<int>>memo(grid.size(),vector<int>(grid[0].size(),-1));
        // return recurse(grid,0,0,memo);


        /////////tabulation???//////////////////

    //    int m = grid.size();
    //     int n = grid[0].size();
        
    //     vector<vector<int>> dp(m, vector<int>(n, 0));
        
       
    //     dp[0][0] = grid[0][0];
        
       
    //     for(int i = 1; i < m; i++) {
    //         dp[i][0] = dp[i-1][0] + grid[i][0];
    //     }
        
       
    //     for(int j = 1; j < n; j++) {
    //         dp[0][j] = dp[0][j-1] + grid[0][j];
    //     }
        
        
    //     for(int i = 1; i < m; i++) {
    //         for(int j = 1; j < n; j++) {
    //             dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]);
    //         }
    //     }
        
    //     return dp[m-1][n-1];

    ///////space optimization//////////////////

    int m = grid.size();
        int n = grid[0].size();
        
        vector<int>dp(n ,0);
       
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i==0 && j==0)
                {
                    dp[j]=grid[0][0];
                }
                else if( i==0)
                {
                    dp[j]=dp[j-1]+grid[i][j];
                }
                else if(j==0)
                {
                    dp[j]=dp[j]+grid[i][j];
                }
                else
                {
                    dp[j]=grid[i][j]+min(dp[j-1],dp[j]);
                }
            }
        }
        
        return dp[n-1];
    }
};