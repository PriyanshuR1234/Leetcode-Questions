class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int two=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                swap(nums[i],nums[two]);
                two++;
            }
        }
        return two;
    }
};