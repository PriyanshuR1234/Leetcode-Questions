class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto& pair:m)
        {
            pq.push({pair.second,pair.first});
        }

        
        string str;
        while(!pq.empty())
        {
            auto top=pq.top();
            pq.pop();
            str.append(top.first,top.second);
        }
        return str;
    }
};