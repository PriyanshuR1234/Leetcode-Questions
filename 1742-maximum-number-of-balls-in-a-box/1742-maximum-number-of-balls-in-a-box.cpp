class Solution {
public:
    int sum(int n)
    {
        int s=0;
        while(n>0)
        {
            s+=n%10;
            n=n/10;
        }
        return s;
    }
    int countBalls(int lowLimit, int highLimit) {
        vector<int>ans(45+1,0);
        for(int i=lowLimit;i<=highLimit;i++)
        {
           ans[sum(i)]++;
        }
        int m=0;
        for(int i=0;i<ans.size();i++)
        {
            m=max(m,ans[i]);
        }
        return m;
    }
};