class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int max=INT_MAX;
        vector<string>ans;
        for(int i=0;i<list1.size();i++)
        {
            for(int j=0;j<list2.size();j++)
            {
                if( list1[i]==list2[j])
                {

                    int curr=i+j;
                    if(curr<max)
                    {
                        max=curr;
                        ans.clear();
                        ans.push_back(list1[i]);
                    }
                    else if(curr==max)
                    {
                        ans.push_back(list1[i]);
                    }
                    // if(list1[i]==list2[j])
                    // {
                    //     ans.push_back(list1[i]);
                    //     max=i+j;
                    // }
                    // if(i+j<max)
                    // {
                    //     ans.pop_back();
                    //     ans.push_back(list1[i]);
                    // }
                }
                
            }
        }
        return ans;
    }
};