class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       int mi=INT_MAX;
       int n = nums.size();
        if (n == 0) return -1;
       vector<int>ans;
       for(int i=nums.size()-1;i>=0;i--)
       {
        if(nums[i]<mi)
        {
            mi=nums[i];   
        }
        ans.push_back(mi);
       } 

       reverse(ans.begin(),ans.end());
       int ma=INT_MIN;
       int small=INT_MAX;
       for(int i=0;i<nums.size();i++)
       {
            if(nums[i]>ma)
            {
                ma=nums[i];
            }
            if (ma - ans[i] <= k) {
                return i;
            }

       }
       return -1;
    }
};