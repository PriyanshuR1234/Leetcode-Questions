class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() <= 1) return s.size(); 
        int start=0;
        int end=0;
        
        unordered_map<char,int>seen;
        int maxi=0;
        while(start<s.size() && end<s.size())
        {
            
            if(seen[s[end]]==0)
            {
                seen[s[end]]++;
                end++;
                maxi=max(maxi,end-start);

            }
            else {
                seen[s[start]]--;
                start++;
            }
        }
        return maxi;
    }
};