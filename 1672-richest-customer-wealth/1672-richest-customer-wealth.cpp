class Solution {
public:

    int add(vector<int> ans)
    {
        int sum=0;
        for(int i:ans)
        {
            sum+=i;
        }
        return sum;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=-1;
        for(int i=0;i<accounts.size();i++)
        {
            int sume=add(accounts[i]);
            if(sume>max)
            {
                max=sume;
            }
        }
        return max;
    }
};