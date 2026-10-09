class Solution {
public:
    int minInsertions(string s) {
        int count = 0;
        int open_brackets = 0; 
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if (s[i] == '(')
            {
                open_brackets++;
            } else 
            {
                if(i+1<n && s[i+1]==')')
                {
                    i++;
                }
                else
                {
                    count++;
                }


                if(open_brackets>0)
                {
                    open_brackets--;
                }
                else
                {
                    count++;
                }
            }

        }
        count+=open_brackets*2;
        return count;

    }
};