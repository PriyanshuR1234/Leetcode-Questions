#include <string>
#include <climits>
#include <cctype>

class Solution {
public:
    int myAtoi(std::string s) {
        int i = 0;
        int n = s.length();
        
        // 1. Skip leading whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        // 2. Check for sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }
        
        // 3. Convert digits and handle overflow
        int result = 0;
        while (i < n && std::isdigit(s[i])) {
            int digit = s[i] - '0';
            
            // Check for overflow/underflow before multiplying
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            i++;
        }
        
        return result * sign;
    }
};
