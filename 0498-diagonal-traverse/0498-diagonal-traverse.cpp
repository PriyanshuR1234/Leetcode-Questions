class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>ans(m+n+1);
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[i+j].push_back(mat[i][j]);
            }
        }


        for(int i=0;i<ans.size();i++)
        {
            if(i%2==0)
                reverse(ans[i].begin(),ans[i].end());

            for(int j=0;j<ans[i].size();j++)
            {
                if(i!=0)
                ans[0].push_back(ans[i][j]);
               arr.push_back(ans[i][j]);
               cout<<ans[i][j];
            }
            cout<<endl;
            
        }

        return ans[0];


        
    }
};