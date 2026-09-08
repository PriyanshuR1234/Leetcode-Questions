class Solution {
public:
    int countCommas(int n) {
        int digit=0;
        int hundred=0;
        int num=n;
        while(n>0)
        {
            digit++;
            n=n/10;
        }
        cout<<digit;
        if(digit<=3) return hundred;
        if(digit>=3)
        {
            hundred=1;
            digit-=3;
        }
        

        
        return num-999;
    }
};