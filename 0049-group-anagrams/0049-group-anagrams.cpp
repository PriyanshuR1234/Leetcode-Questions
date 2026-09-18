class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        vector<vector<string>>ans;
        for(int i=0;i<strs.size();i++)
        {
            string sorted=strs[i];
            sort(sorted.begin(),sorted.end());
            map[sorted].push_back(strs[i]);
        }
        for(auto &a:map)
        {
            ans.push_back(a.second);
        }
        return ans;
    }
};