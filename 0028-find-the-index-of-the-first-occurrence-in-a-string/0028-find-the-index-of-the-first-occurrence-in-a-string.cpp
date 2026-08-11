class Solution {
public:
    int strStr(string haystack, string needle) {
         int n = haystack.size(), m = needle.size();
        if (m == 0) return 0;
        if (n < m) return -1;
        for(int i=0;i<=haystack.size()-needle.size();i++)
        {
            for(int j=0;j<needle.size();j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    break;
                }
                if(j==needle.size()-1) return i;
            }
        }
        return -1;
    }
};