class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest=-1;
        int ind=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>largest)
            {
                largest=nums[i];
                ind=i;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==largest)continue;
            if(largest<(nums[i]*2))
            {
                return -1;
            }
        }
       
        return ind;
    }
};