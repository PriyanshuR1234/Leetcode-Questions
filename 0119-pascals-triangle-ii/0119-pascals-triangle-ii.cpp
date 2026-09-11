class Solution {
public:
    vector<int> getRow(int numRows) {
        numRows++;
        vector<vector<int>>ans(numRows);
        
       
        if (numRows == 0) return {1};

       
        ans[0].push_back(1); 
        if (numRows == 1) return ans[numRows-1]; 

       
        ans[1].push_back(1); 
        ans[1].push_back(1); 
        if (numRows == 2) return ans[numRows-1]; 

        
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
        return ans[numRows-1];
    }
};