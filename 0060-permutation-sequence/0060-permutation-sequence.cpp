class Solution {
public:
    string getPermutation(int n, int k) {
        

        // Precompute factorials up to 9! (Problem constraints usually n <= 9)
        vector<int> fact(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            fact[i] = fact[i - 1] * i;
        }

        // Create a list of available numbers: {1, 2, 3, ..., n}
        vector<int> numbers;
        for (int i = 1; i <= n; i++) {
            numbers.push_back(i);
        }

        // Convert k to 0-indexed for clean modulo math
        k--; 

        string ans = "";

        // Determine each digit one by one
        for (int i = n; i >= 1; i--) {
            // Block size is (number of remaining elements - 1)!
            int blockSize = fact[i - 1];
            
            // Find the exact index of the number we need
            int index = k / blockSize;
            
            // Append the selected number to our result string
            ans += to_string(numbers[index]);
            
            // Remove the used number from our available pool
            numbers.erase(numbers.begin() + index);
            
            // Update k for the remaining digits
            k %= blockSize;
        }

        return ans;
    }
};
