class Solution {
public:
    int maxProduct(int n) {
        int num=n;
        int m=0;
        int first=0;
        while(num>0)
        {
            int rim=num%10;
            num=num/10;
            first=max(rim,first);
            m=max(m,first*(num%10));
            
        }
        return m;
    }
};