class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int col=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i].size()>col)
            col=nums[i].size();
        }
        vector<vector<int>>arr(nums.size()+col+1);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                arr[i+j].push_back(nums[i][j]);
            }
        }
        
        for(int i=0;i<arr.size();i++)
        {
            reverse(arr[i].begin(),arr[i].end());
            for(int j=0;j<arr[i].size();j++)
            {
                if(i!=0)
                {
                    arr[0].push_back(arr[i][j]);
                }
            }
        }
        return arr[0];
    }
};