class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        // int i==0;
        // int j==0;
        int count=0;

        for(string s:commands)
        {
            if(s=="DOWN")
            {
                count+=n;
            }
            else if(s=="RIGHT")
            {
                count++;
            }
            else if(s=="UP")
            {
                count-=n;
            }
            else if(s=="LEFT")
            {
                count--;
            }
        }
        return count;
    }
};