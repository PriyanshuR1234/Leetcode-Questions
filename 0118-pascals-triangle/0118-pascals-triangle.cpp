class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);
        // Handle the absolute base case
        if (numRows == 0) return ans;

        // Build the first row
        ans[0].push_back(1); 
        if (numRows == 1) return ans; 

        // Build the second row
        ans[1].push_back(1); 
        ans[1].push_back(1); 
        if (numRows == 2) return ans; 

        
        for(int i=2;i<numRows;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                {
                    ans[i].push_back(1);
                }
                else
                {
                    ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
                }
            }
        }
        return ans;
    }
};