class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
             int x = target - nums[i];
            
            // Check if the complement already exists in the map
            if (m.find(x) != m.end()) {
                return {m[x], i};
            }
            
            // Store the current number and its index after checking
            m[nums[i]] = i;
        }
        return {-1,-1};
    }
};