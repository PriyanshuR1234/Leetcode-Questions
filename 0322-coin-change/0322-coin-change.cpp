class Solution {
public:

    int coincount(vector<int>&coins,int amount,int ind,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(amount%coins[ind]==0)return amount/coins[ind];
            else
            return 1e9;
        }
        if(dp[ind][amount]!=-1)return dp[ind][amount];

        int nottake=0+coincount(coins,amount,ind-1,dp);
        int take=INT_MAX;
        if(coins[ind]<=amount)
        {
            take=1+coincount(coins,amount-coins[ind],ind,dp);
        }
        return dp[ind][amount]=min(take,nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        {
            // if(amount==0)return 0;
            // int count=0;
            // sort(coins.begin(),coins.end());
            // int n=coins.size()-1;
            // while(amount>0 && n>=0)
            // {
            //     if(amount>=coins[n])
            //     {
            //         //int temp=temp-coins[n];
            //         amount=amount-coins[n];
            //         cout<<amount<<" ";
            //         count++;
                    
            //     }
            //     else{
            //         n--;
            //     }
                
            //     //amount=amount/coins[n];
                
            // }
            // cout<<count;
            // if(amount==0)
            // {
            //     return count;
            // }
            // return -1;


            //above one only pass 52 test case 
        }
        vector<vector<int>>dp(coins.size(), vector<int>(amount + 1, -1));;
        int count=0;
        count=coincount(coins,amount,coins.size()-1,dp);
       if(count>=1e9)return -1;
       return count;
    }
};