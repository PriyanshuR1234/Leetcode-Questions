class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int curr=0;
        vector<int>ans;
        for(char c:seq)
        {
            if(c=='(')
            {
                curr++;

                ans.push_back(curr%2);
            }
            else
            {
                ans.push_back(curr%2);
                curr--;
            }
        }
        return ans;
    }
};