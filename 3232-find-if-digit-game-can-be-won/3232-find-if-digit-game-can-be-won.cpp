class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        int s2=0;
        for(int n:nums)
        {
            if(to_string(n).size()==1)
            {
                sum+=n;
            }
            else
            {
                s2+=n;
            }
        }
        return s2!=sum;
    }
};