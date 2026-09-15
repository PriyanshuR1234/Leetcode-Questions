class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        
        vector<int> s1_freq(26, 0);
        vector<int> window_freq(26, 0);

        for(int i=0;i<s1.size();i++)
        {
            s1_freq[s1[i]-'a']++;
            window_freq[s2[i]-'a']++;
        }

        if(s1_freq==window_freq) return true;

        int start=0;
        for(int end=s1.size();end<s2.size();end++)
        {
            window_freq[s2[end]-'a']++;

            window_freq[s2[start]-'a']--;
            start++;

             if(s1_freq==window_freq) return true;
        }

        return false;

    }
};