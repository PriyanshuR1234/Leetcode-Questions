class Solution {
public:
    int minimumSum(int num) {
        int m=INT_MAX;
        vector<int>ans;
        while(num>0)
        {
            ans.push_back(num%10);
            num=num/10;
        }
        reverse(ans.begin(),ans.end());
        sort(ans.begin(),ans.end());
        return (ans[0]*10+ans[2])+(ans[1]*10+ans[3]);
    }
};