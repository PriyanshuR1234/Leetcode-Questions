#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Your exact check function
    int check(string s, int start, int end)
    {
        while(start < end)
        {
            if(s[start] != s[end])
            {
                return 0;
            }
            start++;
            end--;
        }
        return 1;
    }

    int maxPalindromes(string s, int k) {
        int count = 0;
        int last_ended = -1; 


        for (int end = k - 1; end < s.size(); end++) 
        {
            for (int len = k; len <= k + 1; len++) 
            {
                int start = end - len + 1;

                
                if (start > last_ended) {
                    if (check(s, start, end) == 1) {
                        count++;
                        last_ended = end; 
                        break; 
                    }
                }
            }
        }
        return count;
    }
};
