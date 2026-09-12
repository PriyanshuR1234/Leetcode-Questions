class Solution {
public:
    char findTheDifference(string s, string t) {
        // unordered_map<char, int> arr;
        // for (char c : s) {
        //     arr[c]++;
        // }
        // for (char c : t) {
        //     arr[c]--;
        //     if (arr[c] < 0) { 
        //         return c;
        //     }
        // }
        // return ' ';

        char res=0;
        for(int i=0;i<s.size();i++)
        {
            res^=s[i];
            res^=t[i];
        }
        res^=t[t.size()-1];
        return res;
    }
};