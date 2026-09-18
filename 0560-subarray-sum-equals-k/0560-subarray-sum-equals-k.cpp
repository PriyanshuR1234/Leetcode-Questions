class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int sum=0;
       int count=0;
       unordered_map<int,int>ans;
       ans[0]=1;
       for(int i=0;i<nums.size();i++)
       {
            sum+=nums[i];
            if(ans[sum-k]>0)
            {
                count+=ans[sum-k];
            }   
            ans[sum]+=1;

       }
       return count;

    }
};