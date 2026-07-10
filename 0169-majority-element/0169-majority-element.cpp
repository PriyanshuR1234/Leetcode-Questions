class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int count=0;
        int ans=nums[0];
        for(int n:nums)
        {
            m[n]++;
            if(m[n]>count)
            {
                count=m[n];
                ans=n;
            }
        }
        return ans;
    }
};