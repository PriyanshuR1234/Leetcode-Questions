class Solution {
public:
    int countCommas(int n) {
        int num=n;
        // int digit=0;
        // int hundred=0;
        
        // while(n>0)
        // {
        //     digit++;
        //     n=n/10;
        // }
        // cout<<digit;
        // if(digit<=3) return hundred;
        // if(digit>=3)
        // {
        //     hundred=1;
        //     digit-=3;
        // }
        if(n<1000)return 0;
        

        
        return num-999;
    }
};