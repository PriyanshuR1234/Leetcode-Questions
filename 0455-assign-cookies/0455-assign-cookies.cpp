class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int pg=0;
        int sg=0;
        int count=0;
        while(pg<g.size() && sg<s.size())
        {
            if(g[pg]<=s[sg])
            {
                pg++;
            }
            sg++;
            
        }
        count=pg;
        return count;

    }
};