class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int totalSize = nums1.size() + nums2.size();
        std::vector<int> arr(totalSize);
        
        // Efficiently merge two already-sorted arrays
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), arr.begin());
        
        if (totalSize % 2 == 0) {
            return (arr[totalSize / 2 - 1] + arr[totalSize / 2]) / 2.0;
        } else {
            return arr[totalSize / 2];
        }
    }
};