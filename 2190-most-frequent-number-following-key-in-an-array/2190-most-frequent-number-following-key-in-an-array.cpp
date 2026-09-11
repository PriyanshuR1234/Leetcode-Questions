class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int target=0;
        unordered_map<int,int>m;
        int idx=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==key)
            {
                m[nums[i+1]]++;
            }
        }
        // int count=0;
        // for(int i=idx;i<nums.size();i++)
        // {
        //     if(nums[i]==target)
        //     {
        //         count++;
        //     }
        // }
        int count=0;
        int n=0;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]>count)
            {
                count=m[nums[i]];
                n=nums[i];
            }
        }
        return n;
    }
};