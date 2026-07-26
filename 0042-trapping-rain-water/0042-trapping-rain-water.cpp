class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=0,rmax=0,total=0,l=0,r=height.size()-1;
        while(l<r)
        {
            if(height[l]<=height[r])
            {
                if(lmax>height[l])
                {
                    total+=lmax-height[l];
                }
                else
                {
                    lmax=height[l];
                }
            l=l+1;
            }
            else
            {
                if(rmax>height[r])
                {
                    total+=rmax-height[r];
                }
                else
                {
                    rmax=height[r];
                }
            r--;
            }
        }
        return total;
    }
};