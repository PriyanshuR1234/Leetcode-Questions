class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        /////////////////////brutefoce///////////////////////////

        // int count=0;
        // for(int i=0;i<time.size();i++)
        // {
        //     for(int j=i+1;j<time.size();j++)
        //     {
        //         if((time[i]+time[j])%60==0)
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;




    /////////////////////////////little more///////////////////////////////
    
    //     int count=0;
    //     int start=0;

    //    for(start=0;start<time.size();start++)
    //    {
    //     int end=time.size()-1;

    //         while(end>start)
    //         {
    //             int sum=time[start]+time[end];

    //             if(sum%60==0)
    //             {
    //                 count++;
    //             }
    //             else if(sum<60)
    //             {
    //                 break;
    //             }
    //             end--;
    //         }
    //    }
    //    return count;

        int k=60;
        int count=0;
        vector<int>ans(k,0);
        for(int i=0;i<time.size();i++)
        {
            int rim=time[i]%k;
            int rem=(k-rim)%k;
            count+=ans[rem];
            ans[rim]++;
        }
        return count;
    }
    

    
};