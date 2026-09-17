class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](auto& a, auto& b) { return a[1] > b[1]; });
        
        int count=0;
        
        for(int i=0;i<boxTypes.size() ;i++)
        {
            int bc = boxTypes[i][0];
            int upb = boxTypes[i][1];

            if(bc<=truckSize)
            {
                count+=bc*upb;
                truckSize-=bc;
            }
            else
            {
                count+=truckSize*upb;
                break;
            }
        }
        return count;

    }
};