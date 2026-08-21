class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;
        
        // Step 1: Shift all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[insertPos],nums[i]);
                insertPos++;
            }
        }
    }
};