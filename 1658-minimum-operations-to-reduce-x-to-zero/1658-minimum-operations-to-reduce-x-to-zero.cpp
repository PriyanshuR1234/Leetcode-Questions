class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
       int t_sum=0;
       for(int i=0;i<nums.size();i++)
       {
            t_sum+=nums[i];
       }
       if(t_sum==0)return nums.size();
       if(t_sum<0)return -1;


       int target=t_sum-x;
       int curr=0;
       int max_len=-1;
       int left=0;

       for(int right=0;right<nums.size();right++)
       {
            curr+=nums[right];
            while(curr>target && left<=right)
            {
                curr-=nums[left];
                left++;
            }
            if(curr==target)
            {
                max_len=max(max_len,right-left+1);
            }
       }
       return max_len==-1?-1:nums.size()-max_len;
    }
};