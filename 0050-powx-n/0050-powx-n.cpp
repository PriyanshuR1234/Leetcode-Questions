class Solution {
public:
    double myPow(double x, int n) {
        long long nn = n; // Use long long to prevent overflow when n = INT_MIN
        double ans = 1.0; // Must be double to maintain precision
        
        if (nn < 0) {
            nn = -nn; // Convert to positive for calculation
        }
        
        while (nn > 0) {
            if (nn % 2 == 1) { // If exponent is odd
                ans *= x;
                nn--;
            } else { // If exponent is even
                x *= x;
                nn /= 2;
            }
        }
        
        // If the original exponent was negative, invert the answer
        if (n < 0) {
            ans = 1.0 / ans;
        }
        
        return ans;
    }
};