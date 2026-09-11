class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>m;
        int count=0;
        for(char s:jewels)
        {
            m[s]++;
        }
        for(char c:stones)
        {
            if(m[c]>0)
            {
                count++;
            }
        }
        return count;
    }
};