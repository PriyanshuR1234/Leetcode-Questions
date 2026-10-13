class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                nums[i]*=-1;
            }
        }
        sort(nums.begin(),nums.end());

        long long sum=0;
        int start=0;
        int end=nums.size()-1;
        while(start<end)
        {
            sum+=pow(nums[end--],2);
            sum-=pow(nums[start++],2);
        }
        if(nums.size()%2!=0)
        {
            sum+=pow(nums[start],2);
        }
        return sum;
    }
};