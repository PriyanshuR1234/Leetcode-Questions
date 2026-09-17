class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<k)count++;
            else continue;
            long long p=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                p*=nums[j];
                if(p<k)
                {
                    count++;
                }
                else break;
            }
        }
        return count;
    }
};