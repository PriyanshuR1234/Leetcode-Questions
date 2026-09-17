class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count=0;
        string s=to_string(num);

        for(int i=0;i<s.size()-k+1;i++)
        {
            cout<<s.substr(i,i+k)<<" ";
            int val=stoi(s.substr(i,k));
            if (val != 0 && num % val == 0) 
            {
                count++;
            }
        }
        return count;
    }
};