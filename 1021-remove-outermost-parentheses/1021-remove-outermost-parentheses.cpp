class Solution {
public:
    string removeOuterParentheses(string s) {
       string res="";
       int count=0;
       for(char c:s)
       {
        if(c=='(')
        {
            // If it's not the outermost opening parenthesis, add it
                if (count > 0) {
                    res += c;
                }
                count++;
        }
        else{
            count--;
            if(count>0)
            {
                res+=c;
            }
        }
       } 
       return res;
    }
};