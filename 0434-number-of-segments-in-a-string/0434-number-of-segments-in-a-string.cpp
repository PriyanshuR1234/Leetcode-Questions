class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string a;
        int count=0;
       while(ss>>a)
        {
            count++;
        }
        return count;
    }
};