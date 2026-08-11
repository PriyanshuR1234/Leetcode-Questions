class Solution {
public:
    string rec(int count, int n, string s) {
        // Base case: If we have processed n-1 iterations, return the string
        if (count == n) return s;
        
        string curr = "";
        int counter = 1; // Start at 1 to count the first occurrence
        
        for (int i = 1; i <= s.size(); i++) {
            // Check if we are at the end of the string OR the character changed
            if (i < s.size() && s[i] == s[i-1]) {
                counter++;
            } else {
                // Append the frequency and the character
                curr += to_string(counter) + s[i-1];
                counter = 1; // Reset counter to 1 for the next character
            }
        }
        
        // Pass the updated string 'curr' to the next recursive call and return its result
        return rec(count + 1, n, curr);
    }

    string countAndSay(int n) {
        if (n == 1) return "1";
        // Start from count = 2 because the base case string is for n = 1
        return rec(1, n, "1");
    }
};
