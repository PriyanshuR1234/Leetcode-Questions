class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            int mi=matrix[i][0];
            int ind=0;
            int flag=true;
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]<mi)
                {
                    mi=matrix[i][j];
                    ind=j;
                }
            }
            for(int j=0;j<n;j++)
            {
                if(matrix[j][ind]>mi)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            ans.push_back(mi);
        }
        return ans;
    }
};