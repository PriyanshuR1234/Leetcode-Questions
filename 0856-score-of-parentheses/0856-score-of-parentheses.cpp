class Solution {
public:
    int scoreOfParentheses(string s) {
        int start=0;
        int end=0;


        int ans=0;

        while(start<s.size())
        {
            if(s[start]=='(')
            {
                end++;
            }
            else
            {
                end--;
                if(s[start-1]=='(')
                {
                     ans+=pow(2,end);
                }
            }
            start++;

           
        }
        return ans;
    }
};