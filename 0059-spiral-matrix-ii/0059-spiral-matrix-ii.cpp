class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        if(n==0)return ans;

        int top=0;
        int left=0;
        int right=n-1;
        int bottom=n-1;
        int count=1;

       

        while(top<=bottom && left<=right)
        {
            //top
            for(int i=left;i<=right;i++)
            {
                ans[top][i]=count++;
                
            }
            top++;

            //right

           for(int i=top;i<=bottom;i++)
            {
                ans[i][right]=count++;
                
            }
            right--;





            //bottom

            for(int i=right;i>=left;i--)
            {
                ans[bottom][i]=count++;
                
            }
            bottom--;


            //left
            for(int i=bottom;i>=top;i--)
            {
                ans[i][left]=count++;
                
            }
            left++;

        }
        return ans;
    }
};