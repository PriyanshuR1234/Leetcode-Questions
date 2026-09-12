class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>ans;
        vector<int>arr;
        for(int i:nums1)
        {
            ans[i]++;
        }
        for(int i:nums2)
        {
            if(ans[i]>0)
            {
                ans[i]--;
                arr.push_back(i);
            }
        }
        return arr;
    }
};