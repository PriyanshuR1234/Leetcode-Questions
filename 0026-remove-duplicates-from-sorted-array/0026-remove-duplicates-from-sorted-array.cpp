class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
            if(map[nums[i]]<1)
            {
                nums[ans]=nums[i];
                ans++;
                map[nums[i]]++;
                
            }
            else
            {
                map[nums[i]]++;
            }
        }
        return ans;
    }
};