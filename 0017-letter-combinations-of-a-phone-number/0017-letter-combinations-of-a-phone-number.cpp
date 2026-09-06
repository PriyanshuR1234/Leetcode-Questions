class Solution {
public:
    void generate(string digits,map<char,string>&m,vector<string>&ans,int ind,string current)
    {
        if(current.size()==digits.size())
        {
            ans.push_back(current);
            return;
        }
        
        char digit_char = digits[ind];
        string s = m[digit_char];

        for(int i=0;i<s.size();i++)
        {
            generate(digits,m,ans,ind+1,current+s[i]);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        map<char,string>m;
        //m['1']="";
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";


         generate(digits, m,ans,0,"");
         return ans;
    }
};