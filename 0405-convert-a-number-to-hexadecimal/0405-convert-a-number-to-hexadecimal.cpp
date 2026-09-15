#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string toHex(int num) {
        
        if (num == 0) return "0";
        
        
        unsigned int n = num; 
        
       
        string hex_chars = "0123456789abcdef";
        string ans = "";
        
        while (n > 0) {
            int remainder = n % 16;
            ans += hex_chars[remainder]; 
            n /= 16;
        }
        
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
