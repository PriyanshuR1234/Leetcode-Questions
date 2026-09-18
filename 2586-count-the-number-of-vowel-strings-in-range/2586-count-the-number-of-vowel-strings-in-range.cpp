class Solution {
public:
bool isvovel(char c)
{
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++)
        {
            string s=words[i];
            int len=s.length();
            char f=s[0];
            char e=s[len-1];
            if(isvovel(f) && isvovel(e)) count++;
        }
        return count;
    }
};