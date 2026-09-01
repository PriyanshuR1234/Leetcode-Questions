class Solution {
public:
    bool countdig(int n)
    {
        if(to_string(n).size()%2==0)
        {
            return true;
        }
        return false;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i:nums)
        {
           if( countdig(i))
           {
            count++;
           }
            
        }
        return count;
    }
};