class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
       //tortoise method
       int slow=nums[0];
       int fast=nums[0];

       do{
        slow=nums[slow];
        fast=nums[nums[fast]];
       }while(slow!=fast);
       fast=nums[0];
       while(slow!=fast)
       {
            slow=nums[slow];
            fast=nums[fast];
       }
       return slow;




       //n if it allow to make chanes in array then 
        // for (int i = 0; i < nums.size(); i++) {
        //     int val = abs(nums[i]);
        //     if (nums[val] < 0) {
        //         return val; // Already visited, this is the duplicate
        //     }
        //     nums[val] = -nums[val]; // Mark as visited
        // }
        // return -1;
    }
};