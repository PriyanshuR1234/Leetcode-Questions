class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int open=0;
        for(char c:s)
        {
            if(c=='(')
            {
                if(open>0)
                {
                    ans.push_back('(');
                }
                open++;
            }
            else
            {
                open--;
                if(open>0)
                {
                    ans.push_back(')');
                }
            }
        }
        return ans;
    }
};