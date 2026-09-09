class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>ans(m,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[j]=max(ans[j],(int)to_string(grid[i][j]).size());
            }
        }
        // cout<<to_string(grid[0][0]).size();
        
        return ans;
    }
};