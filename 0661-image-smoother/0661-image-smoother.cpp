class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> mat(n,vector<int>(m,0));
        
        
        vector<int>row={-1,-1,-1,0,0,1,1,1};
        vector<int>col={-1,0,1,-1,1,-1,0,1};
        int zcount=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                    int count=0;
                    int avg=0;
                    int sum=0;
                    for(int k=0;k<8;k++)
                    {
                        int nr=i+row[k];
                        int nc=j+col[k];
                        
                        
                        if(nr >= 0 && nr < n && nc >= 0 && nc < m) 
                        {
                            sum+=matrix[nr][nc];
                            count++;
                        }

                    }
                    sum+=+matrix[i][j];
                    count++;
                    mat[i][j]=sum/count;

                    
                
                    
            }
        }
        return mat;
    }
};