class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int target = nums.size() / 3;
        unordered_map<int, int> counts;
        vector<int> result;
        
        // Step 1: Count frequencies of all elements
        for (int num : nums) {
            counts[num]++;
        }
        
        // Step 2: Filter elements appearing more than n/3 times
        for (auto& pair : counts) {
            if (pair.second > target) {
                result.push_back(pair.first);
            }
        }
        
        return result;
    }
};
