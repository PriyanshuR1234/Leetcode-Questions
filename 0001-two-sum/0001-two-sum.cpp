class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           std::unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in the map
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            
            // If not found, store the current number and its index
            numMap[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (though LeetCode guarantees one)
        return {};
    }
};