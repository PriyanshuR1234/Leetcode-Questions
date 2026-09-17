class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> best_at_left(n, INT_MAX);
        int sum = 0, start = 0, min_len = INT_MAX, ans = INT_MAX;
        
        for (int i = 0; i < n; ++i) {
            sum += arr[i];
            while (sum > target) {
                sum -= arr[start++];
            }
            if (sum == target) {
                int cur_len = i - start + 1;
                if (start > 0 && best_at_left[start - 1] != INT_MAX) {
                    ans = min(ans, best_at_left[start - 1] + cur_len);
                }
                min_len = min(min_len, cur_len);
            }
            best_at_left[i] = min_len;
        }
        
        return ans == INT_MAX ? -1 : ans;
    }
};
