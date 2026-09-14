class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>m;
        
       

        // if(fruits.size()<=2)return fruits.size();
        // for(int i=2;i<fruits.size();i++)
        // {
        //     mx=max(mx,count);
        //     if(fruits[i]!=first && fruits[i]!=second)
        //     {
        //         first=second;
        //         second=fruits[i];
        //         count=2;
        //     }
        //     else{
        //         count++;
        //     }

        // }
        // return count;

        int left=0;
        int mx=0;
        for(int right=0;right<fruits.size();right++)
        {
            m[fruits[right]]++;

            while(m.size()>2)
            {
                m[fruits[left]]--;
                if(m[fruits[left]]==0)
                {
                    m.erase(fruits[left]);
                }
                left++;
            }
            mx=max(mx,right-left+1);
        }
        return mx;
    }
};