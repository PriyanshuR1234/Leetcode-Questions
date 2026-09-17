class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // if (s.size() <= 1) return s.size(); 
        // int start=0;
        // int end=0;
        
        // unordered_map<char,int>seen;
        // int maxi=0;
        // while(start<s.size() && end<s.size())
        // {
            
        //     if(seen[s[end]]==0)
        //     {
        //         seen[s[end]]++;
        //         end++;
        //         maxi=max(maxi,end-start);

        //     }
        //     else {
        //         seen[s[start]]--;
        //         start++;
        //     }
        // }
        // return maxi;


        int n=s.length();
        int left=0;
        int len=0;
        vector<int>ans(128,0);

        for(int right=0;right<n;right++)
        {
            char ch=s[right];
            left=max(left,ans[ch]);

            ans[ch]=right+1;
            len=max(len,right-left+1);

        }
        return len;
    }
};