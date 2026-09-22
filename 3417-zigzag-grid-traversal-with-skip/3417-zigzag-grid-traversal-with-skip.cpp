class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<m;j++)
                {
                    if((i+j)%2==0)
                    ans.push_back(grid[i][j]); 
                }
            }
            else
            {
                for(int j=m-1;j>=0;j--)
                {
                    if((i+j)%2==0)
                    ans.push_back(grid[i][j]);
                }
            }
            
        }
        return ans;
        
    }
};