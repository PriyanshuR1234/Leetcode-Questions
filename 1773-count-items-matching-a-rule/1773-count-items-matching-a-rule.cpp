class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int match=0;
       if (ruleKey == "type") match = 0; 
        if (ruleKey == "color") match = 1; 
        if (ruleKey == "name") match = 2; 
        int count=0;
        cout<<match<<" ";


        for(int i=0;i<items.size();i++)
        {
            if(items[i][match]==ruleValue)
            {
                count++;
            }
        }
        return count;
    }
};