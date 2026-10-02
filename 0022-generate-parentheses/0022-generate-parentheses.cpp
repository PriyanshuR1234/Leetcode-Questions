class Solution {
public:
    void recurse(int open,int close,string s,vector<string>& ans ,int n)
    {
        if(open ==n && close==n)
        {
            ans.push_back(s);
            return ;
        }

        if(open<n)
        {
            recurse(open+1,close,s+"(",ans,n);
        }
        if(close<open)
        {
            recurse(open,close+1,s+")",ans,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string>ans;
        recurse(0,0,s,ans,n);
        return ans;
    }
};