class Solution {
public:
    string largestOddNumber(string num) {
        int unit=0;
        string s="";
        unit=(int)(num[num.size()-1]);

        if(unit%2!=0) 
        {
            return num;
        }
        int i=num.size()-1;
        while(unit%2==0 && i>=0)
        {
            unit=(int)(num[i]);
            if(unit%2!=0) 
            {
                return num.substr(0,i+1);
            }
        i--;
        }
        return s;
    }
};