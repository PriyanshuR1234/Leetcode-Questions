class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // if(k<=1)return 0;
        // int count =0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]<k)count++;
        //     else continue;
        //     long long p=nums[i];
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         p*=nums[j];
        //         if(p<k)
        //         {
        //             count++;
        //         }
        //         else break;
        //     }
        // }
        // return count;

        if(k<=1)return 0;
        int left=0;
        int count=0;
        int pro=1;
        for(int i=0;i<nums.size();i++)
        {
            pro*=nums[i];
            while(pro>=k && left<nums.size())
            {
                pro/=nums[left];
                left++;
            }
            count+=(i-left)+1;
        }
        return count;
    }
};