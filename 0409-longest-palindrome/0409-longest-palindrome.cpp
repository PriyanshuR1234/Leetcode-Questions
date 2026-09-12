class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>arr(128,0);
        bool odd=false;
        int count=0;
        for(char c:s)
        {
            arr[c]++;
        }
        for(int i=0;i<arr.size();i++)
        {
            if (arr[i] > 0) {
                count += (arr[i] / 2) * 2; 
                if (arr[i] % 2 != 0) {
                    odd = true;        // Flag that an odd character exists
                }
            }
        }

        // If at least one character had an odd count, place it in the center
        return odd ? count + 1 : count;
    }
};