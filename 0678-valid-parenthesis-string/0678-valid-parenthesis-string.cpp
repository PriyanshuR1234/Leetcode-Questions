class Solution {
public:
    bool checkValidString(string s) {
        int leftmin=0;
        int leftmax=0;
        for(char c:s)
        {
            if(c=='(')
            {
                leftmin++;
                leftmax++;
            }
            else if(c==')')
            {
                leftmin--;
                leftmax--;
            }
            else if(c=='*')
            {
                leftmin--;
                leftmax++;
            }

            if(leftmax<0) return false;
            if (leftmin < 0) leftmin = 0;
        }
        return leftmin==0;
    }
};