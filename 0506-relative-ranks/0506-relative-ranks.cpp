class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int>ans;
        int count=0;
        for(int i:score)
        {
            ans[i]=count++;
        }

        sort(score.begin(),score.end(),greater<int>());

        vector<string>arr(score.size());
        for(int i=0;i<score.size();i++)
        {
            if(i==0)
            {
                arr[ans[score[i]]]="Gold Medal";
            }
            else if(i==1)
            {
                arr[ans[score[i]]]="Silver Medal";
            }
            else if(i==2)
            {
                arr[ans[score[i]]]="Bronze Medal";
            }
            else
            {
                arr[ans[score[i]]]=to_string(i+1);
            }
        }
        return arr;
    }
};