class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        vector<vector<char>>ans(numRows);
        
        int row=0;
        int turn=0;
        for(int i=0;i<s.size();i++)
        {
            ans[row].push_back(s[i]);
            if(turn==0)
            {
                row++;
                if(row==numRows)
                {
                    row-=2;
                    turn=1;
                }
            }
            else
            {
                row--;
                if(row==-1)
                {
                    row+=2;
                    turn=0;
                }
            }
        }
        string ss="";
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<ans[i].size();j++)
            {
                ss+=ans[i][j];
            }
        }
        return ss;
    }
};