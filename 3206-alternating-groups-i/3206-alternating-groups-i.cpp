class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size();
        int count=0;
        for(int i=0;i<colors.size();i++)
        {
            if(colors[(i+n-1)%n]==colors[(i+1)%n] && colors[(i+1)%n]!=colors[i])
            {
                count++;
            }
        }
        return count;
    }
};