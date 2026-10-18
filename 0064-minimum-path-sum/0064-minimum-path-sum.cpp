class Solution {
public:
    int  recurse( vector<vector<int>> & grid, int row, int col,vector<vector<int>>& memo)
    {
        
         if(row==grid.size()-1 && col==grid[0].size()-1)
        {
            return grid[row][col];
        }

        if(memo[row][col]!=-1)
        {
            return memo[row][col];
        }

        if(row==grid.size()-1)
        {
            memo[row][col]=grid[row][col]+recurse(grid,row,col+1,memo);
            return grid[row][col]+recurse(grid,row,col+1,memo);
        }

        if(col==grid[0].size()-1)
        {
            memo[row][col]=grid[row][col]+recurse(grid,row+1,col,memo);
            return grid[row][col]+recurse(grid,row+1,col,memo);
        }

        int below=recurse(grid,row+1,col,memo);
        int right=recurse(grid,row,col+1,memo);

        memo[row][col]= grid[row][col]+min(below,right);
        return grid[row][col]+min(below,right);

       

    }
    int minPathSum(vector<vector<int>>& grid) {

        vector<vector<int>>memo(grid.size(),vector<int>(grid[0].size(),-1));
        
        return recurse(grid,0,0,memo);
        
    }
};