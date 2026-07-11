class Solution {
public:


    // //by recursiton 2^n time complexity;
    // int paths(int i, int j)
    // {
    //     if(i==0 || j==0) return 1;
    //     if(i<0 || j<0) return 0;
    //     int up=paths(i-1,j);
    //     int left =paths(i,j-1);
    //     return left+up;
    // }
    // int uniquePaths(int m, int n) {
    //     return paths(m-1,n-1);
    // }



        //by dp time com O(m+n) and space (m*n)
     
     int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)dp[i][j]=1;
                else
                {
                    int up=0,left=0;
                   if(i>0) up=dp[i-1][j];
                   if(j>0) left=dp[i][j-1];
                    dp[i][j]=up+left;
                }
            }
        }
        return dp[m-1][n-1];
    }
};