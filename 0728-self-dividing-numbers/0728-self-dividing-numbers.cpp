class Solution {
public:
    bool isSelfDividing(int n)
    {
        int num=n;
        while(n>0)
        {
            int d=n%10;
            if(d==0)
            {
                n=n/10;
                return false;
            }

            if(num%d!=0)
            {
                return false;
            }
            n=n/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            if(isSelfDividing(i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};