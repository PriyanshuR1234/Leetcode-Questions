class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans(code.size(),0);
        if(k==0) return ans;
        //if(k<0)reverse(code.begin(),code.end());
        int n=code.size();

        for(int i=0;i<code.size();i++)
        {
            if(k>0)
            {
                for(int j=0;j<abs(k);j++)
                {
                    ans[i]+=code[(i+j+1)%n];
                }
            }
            else
            {
                for(int j=0;j<abs(k);j++)
                {
                    ans[(i+1)%n]+=code[(i-j+n)%n];
                }
            }
        }
        //if(k<0)reverse(ans.begin(),ans.end());
        return ans;
    }
};