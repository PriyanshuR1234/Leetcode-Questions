class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top=0;
        int bottom=matrix.size()-1;
        while(top<=bottom)
        {
            int mid=top+(bottom-top)/2;
            if(matrix[mid][0]==target)
            {
                return true;
            }
            else if(matrix[mid][0]<target)
            {
                top=mid+1;
            }
            else{
                bottom=mid-1;
            }
        }
        int left=0;
        top=bottom;
        if(top<0)return false;
        int right=matrix[top].size()-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(matrix[top][mid]==target)
            {
                return true;
            }
            else if(matrix[top][mid]<target)
            {
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return false;
    }
};