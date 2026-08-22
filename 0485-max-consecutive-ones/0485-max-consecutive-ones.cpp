class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        for(int i:nums)
        {
            if(i==0)
            {
                count=0;
            }
            else
            {
                count++;
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};