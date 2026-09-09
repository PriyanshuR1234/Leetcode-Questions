class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int start=0;
        int end=nums.size()-1;
        int count=end;
        while(start<=end)
        {
            if(pow(nums[start],2)>pow(nums[end],2))
            {
                ans[count]=nums[start]*nums[start];
                // swap(nums[start],nums[end]);
                // nums[end]*=nums[end];
                count--;
                start++;
            }
            else
            {
                ans[count]=nums[end]*nums[end];
               // nums[end]*=nums[end];
               count--;
                end--;
            }
        }
        return ans;
        
    }
};