class Solution {
public:
    bool isAnagram(string s, string t) {
        ///trick
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;

        // actual impl
        if(s.size()!=t.size())return false;
        unordered_map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        for(char c:t)
        {
            m[c]--;
        }
        for(char c:s)
        {
            if(m[c]>0)return false;
        }
    return true;
    }
};