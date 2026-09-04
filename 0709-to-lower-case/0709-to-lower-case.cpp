class Solution {
public:
    string toLowerCase(string s) {
        string ss;
       
        for(char c:s)
        {
            
            if(c<='Z'&& c>='A')
            {
                ss+=c-'A'+'a';
            }
            else
            ss+=c;
        }
        
        return ss;
    }
};