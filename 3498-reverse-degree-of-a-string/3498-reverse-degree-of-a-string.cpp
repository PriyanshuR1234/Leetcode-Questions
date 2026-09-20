class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum+=(((26-(s[i]-'a'+1))+1)*(i+1));
        }
        char c='a';
        return sum;
    }
};