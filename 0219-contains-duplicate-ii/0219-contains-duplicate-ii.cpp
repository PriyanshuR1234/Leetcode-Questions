class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (k == 0) return false;
        
        int start = 0;
        unordered_map<int, int> ans; 
        
        for (int i = 0; i < nums.size(); i++) {
           
            if (ans[nums[i]] > 0) return true;
            ans[nums[i]]++;

           
            if (i - start >= k) { 
                ans[nums[start]]--;
                start++;
            }
        }
        return false;
    }
};
