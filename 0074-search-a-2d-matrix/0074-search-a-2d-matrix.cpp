class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            if(target>=matrix[i][0] && target<=matrix[i][matrix[0].size()-1])
            {
                for(int j=0;j<matrix[0].size();j++)
                {
                    if(target==matrix[i][j])
                    return true;
                }
            }
        }
        return false;
    }
};