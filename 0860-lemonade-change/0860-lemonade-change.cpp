class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0;
        int ten=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                f++;
            }
            else if(bills[i]==10)
            {
                if(f==0) return false;

                ten++;
                f--;
            }
            else{
                if(ten>0 && f>0)
                {
                    ten--;
                    f--;
                }
                else if(f>=3)
                {
                    f-=3;
                }
                else 
                {
                    return false;
                }
            }
        }
        return true;
    }
};