class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        int count=0;
        for(char c:s)
        {
            count++;
            if(m[c]==1)
            return count-1;
        }
        return -1;
    }
};