class Solution {
public:
    int maxDepth(string s) {
        int curr=0;
        int mx=0;
        for(char c:s)
        {
            if(c=='(')
            {
                curr++;
            }
            else if(c==')')
            {
                curr--;
            }
            mx=max(curr,mx);
        }
        return mx;
    }
};