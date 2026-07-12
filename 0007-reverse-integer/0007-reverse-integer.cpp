class Solution {
public:
    int reverse(int x) {
       long long rev = 0;
        
        while (x != 0) {
            int temp = x % 10;
            rev = rev * 10 + temp;
            x = x / 10;
        }
        
        // Correct 32-bit signed integer boundaries
        if (rev > 2147483647 || rev < -2147483648) {
            return 0;
        }
        
        return (int)rev;
    }
};