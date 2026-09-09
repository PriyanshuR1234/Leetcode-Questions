class Solution {
public:
    long long countCommas(long long n) {
        if (n < 1000) return 0;

        int digits = std::to_string(n).length();

        long long k = (digits - 1) / 3;if (n < 1000) return 0;

        long long offsets[] = {
            0, 
            999LL, 
            1000998LL, 
            1001000997LL, 
            1001001000996LL, 
            1001001001000995LL, 
            1001001001001000994LL
        };

        return k * n - offsets[k];

       
    }
};