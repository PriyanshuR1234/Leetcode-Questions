class Solution {
public:

    int bound(vector<int> & nums, int target, bool isupper)
    {
        int start=0;
        int end=nums.size()-1;
        int mid=0;
        int res=-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                 res=mid;
                if(isupper)
                {
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else 
            {
                end=mid-1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>range={-1,-1};
        range[0]=bound(nums,target,false);
        range[1]=bound(nums, target, true);
        return range;

    }
};