class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            int start=i+1;
            int end=n-1;
             if (i > 0 && nums[i] == nums[i - 1]) {
                continue; 
            }
            while(end>start)
            {
                if(nums[i]+nums[start]+nums[end]==0)
                {
                    vector<int>temp={nums[i],nums[start],nums[end]};
                    ans.push_back(temp);
                    end--;
                    start++;
                       while (end > start && nums[start] == nums[start - 1]) start++;
                    while (end > start && nums[end] == nums[end + 1]) end--;
                }
                else if(nums[i]+nums[start]+nums[end]<0)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
        return ans;
    }
};