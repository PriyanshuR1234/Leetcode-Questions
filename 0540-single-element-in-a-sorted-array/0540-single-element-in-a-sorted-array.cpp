class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int start=1;
        if(n==1) return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!=nums[n-2])return nums[n-1];
        int end=nums.size()-2;
        int mid=0;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid+1]!=nums[mid] && nums[mid-1]!=nums[mid])
                return nums[mid];
            else if(( mid%2==1 && nums[mid-1]==nums[mid])|| (mid%2==0 && nums[mid+1]==nums[mid])) start=mid+1;
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};