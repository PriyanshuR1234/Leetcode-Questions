class Solution {
public:
    bool rotateString(string s, string goal) {
         if (s.length() != goal.length()) {
            return false;
        }
        
        // Doubling s contains all possible rotations
        string doubled = s + s;
        
        // Check if goal is a substring of doubled
        return doubled.contains(goal);
    }
};