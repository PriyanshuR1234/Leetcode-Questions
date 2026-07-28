class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        //changes made
        int ind=-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                ind=i;
                break;
            }
        }

        if(ind==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }

        bool flag=true;
        for(int i=nums.size()-1;i>ind;i--)
        {
            if(nums[i]>nums[ind])
            {
                int temp=nums[i];
                nums[i]=nums[ind];
                nums[ind]=temp;
                break;

            }
        }
        reverse(nums.begin()+ind+1,nums.end());

        
    }
};