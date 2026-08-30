class Solution {
public:
    vector<int> diStringMatch(string s) {
        int left=0;
        int right=s.size();
        vector<int>ans;
        for(char c:s)
        {
            if(c=='I')
            {
                ans.push_back(left++);
            }
            else if(c=='D')
            {
                ans.push_back(right--);
            }
        }
        if(s[s.size()-1]=='I')ans.push_back(left);
        else ans.push_back(right);
        
        cout<< right;
        return ans;
    }
};