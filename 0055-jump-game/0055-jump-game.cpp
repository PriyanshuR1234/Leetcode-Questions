class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=0;
        int n=nums.size();
        if(nums.size()<=1)return true;
        if(nums[0]==0)return false;
        for(int i=0;i<nums.size();i++)
        {
            if (i > maxi) {
                return false;
            }
            
            
            maxi = max(maxi, i + nums[i]);
            
           
            if (maxi >= n - 1) {
                return true;
            }
        }
        return true;
    }
};