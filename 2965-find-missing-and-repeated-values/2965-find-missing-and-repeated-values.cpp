class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n = grid.size();
        long long m = grid[0].size();
        long long total = n * m;
        
        long long sum = 0, squaresum = 0;
        
        // 1. Correct formulas for numbers from 1 to total
        long long s1 = total * (total + 1) / 2;
        long long s2 = total * (total + 1) * (2 * total + 1) / 6;
        
        // 2. Accumulate values from the grid
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                sum += grid[i][j];
                squaresum += (long long)grid[i][j] * grid[i][j];
            }
        }
        
        // 3. Setup system of equations
        long long x = sum - s1;            // A - B
        long long y = squaresum - s2;      // A^2 - B^2
        long long z = y / x;               // A + B
        
        // 4. Solve for A (repeating) and B (missing)
        int repeating = (x + z) / 2;
        int missing = (z - x) / 2;
        
        return {repeating, missing};
    }
};
