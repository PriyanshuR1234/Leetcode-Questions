class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int>m;
       m['I']=1;
       m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        //// only for increasing performance;
        if(s.length()==1)
        {
            return m[s[0]];
        }
        int sum=0;
        for(int i=1;i<=s.size();i++)
        {
            if(m[s[i]]>m[s[i-1]])
            {
                sum-=m[s[i-1]];
            }
            else
            {
                sum+=m[s[i-1]];
            }
        }

       return sum; 
    }
};