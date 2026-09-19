class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix=1;
        int suffix=1;
        int m=INT_MIN;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;
            prefix*=nums[i];
            suffix*=nums[n-1-i];
            m=max(m,max(prefix,suffix));
        }
        return m;
    }
};