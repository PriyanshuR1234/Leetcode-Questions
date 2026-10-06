class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>stk;
        int count=0;
        for(char c:s)
        {
            if(c=='(')
            {
                stk.push('(');
            }
            else if(c==')'&& !stk.empty())
            {
                stk.pop();
            }
            else{
                count++;
            }
        }
        return stk.size()+count;
    }
};