class Solution {
public:
    
    int maxProduct(vector<int>& nums) {


        //most optimized tricky
        
        // int maxi=INT_MIN;
        // int prefix=1;
        // int suffix=1;
        // int n=nums.size();
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(prefix==0)prefix=1;
        //     if(suffix==0)suffix=1;

        //     prefix=prefix*nums[i];
        //     suffix=suffix*nums[n-1-i];

        //     maxi=max(maxi,max(prefix,suffix));
        // }
        // return maxi;

        //dp solution
        if(nums.empty())return 0;
        int n=nums.size();

        int global=nums[0];
        vector<vector<int >>dp(n,vector<int>(2,0));

        dp[0][0]=nums[0];
        dp[0][1]=nums[0];

        for(int i=1;i<n;i++)
        {
            int val=nums[i];

            dp[i][0]=max({val,val*dp[i-1][0],val*dp[i-1][1]});

            dp[i][1]=min({val,val*dp[i-1][0],val*dp[i-1][1]});

            global=max(global,dp[i][0]);

        }
        return global;
    }
};