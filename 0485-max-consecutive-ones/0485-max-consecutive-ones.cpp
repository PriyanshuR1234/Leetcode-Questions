class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int curr=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                if(curr>max)
                {
                    max=curr;
                }
                curr=0;
            }
            else
            {
                curr++;
            }
        }
        if(curr>max)
                {
                    max=curr;
                }
                curr=0;
        return max;
    }
};