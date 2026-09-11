class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st;
        vector<int>ans;

        for(int x:nums1)
        {
            st.insert(x);
        }
        for(int x:nums2)
        {
            if(st.contains(x))
            {
                st.erase(x);
                ans.push_back(x);
            }
        }
        return ans;
    }
};