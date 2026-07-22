class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n)
        {
            if(n%2!=0)
            {
                count++;
            }
            n=n/2;
        }
        return count;

    }
};