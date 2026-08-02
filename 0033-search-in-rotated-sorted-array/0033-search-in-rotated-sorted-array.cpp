class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int mid=0;
        int end=nums.size()-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(target==nums[mid])
            {
                return mid;
            }
            else if(nums[start]<=nums[mid])
            {
                if(target<nums[mid] && target>=nums[start])
                {
                    end=mid-1;
                }
                else 
                {
                    start=mid+1;
                }
            }
            else
            {
                if(target>nums[mid] && target<=nums[end])
                {
                    start=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};