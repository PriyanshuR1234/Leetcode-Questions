class Solution {
public:
    int splitNum(int num) {
        int m=INT_MAX;
        vector<int>ans;
        while(num>0)
        {
            ans.push_back(num%10);
            num=num/10;
        }
        sort(ans.begin(),ans.end());
        int s1=0;
        int s2=0;
        for(int i=0;i<ans.size();i++)
        {
            if(i%2!=0)
            s1=s1*10+ans[i];
            else
            s2=s2*10+ans[i];
        }
        return s1+s2;
    }
};