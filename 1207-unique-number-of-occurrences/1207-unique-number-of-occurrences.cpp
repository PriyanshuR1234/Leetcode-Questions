class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>ans;
        set<int>st;
        for(int i:arr)
        {
            ans[i]++;
        }
       for(auto& [key, freq] : ans)
        {
            if(!st.insert(freq).second) return false;
        }
        return true;
    }
};