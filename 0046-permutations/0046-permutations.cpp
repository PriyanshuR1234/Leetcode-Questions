class Solution {
public:
    void recurse(int ind,vector<int>&nums,vector<vector<int>>& ans)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return ;
        }

        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            recurse(ind+1,nums,ans);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        recurse(0,nums,ans);
        return ans;
    }
};