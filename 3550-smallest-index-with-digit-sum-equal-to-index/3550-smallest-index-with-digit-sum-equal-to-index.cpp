class Solution {
public:
    int digitsum(int n)
    {
        int sum=0;
        while(n>0)
        {
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {

        int limit = min((int)nums.size(), 28); 
        for(int i=0;i<limit;i++)
        {
            if(digitsum(nums[i])==i)
            {
                return i;
            }
        }
        return -1;
    }
};