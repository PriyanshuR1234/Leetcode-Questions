class Solution {
public:
    void merge(vector<int> & arr, int low , int mid, int high)
    {
        vector<int>temp;
        int left=low;
        int right=mid+1;


        while(left<=mid && right<=high)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            }
        }

        while(left<=mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high)
        {
            temp.push_back(arr[right]);
            right++;
        }


        for(int i=low;i<=high;i++)
        {
            arr[i]=temp[i-low];
        }
    }

    int  countpairs(vector<int> &arr, int low ,int mid ,int high)
    {
        int right=mid+1;
        int count=0;
        for(int i=low;i<=mid;i++)
        {
            while(right<=high && arr[i]>2LL*arr[right])right++;
            count+=(right-(mid+1));
        }
        return count;
    }


    int  mergesort(vector<int> &arr, int low, int high)
    {
        int count=0;
        if(low>=high) return count;
        int mid=(low+high)/2;
        count+=mergesort(arr,low,mid);
        count+=mergesort(arr,mid+1, high);
        count+=countpairs(arr,low,mid,high);
        merge(arr,low,mid,high);
        return count;
    }

    int reversePairs(vector<int>& nums) {
        // //bruteforce n^2
        // int count=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         long long f=2*(long long)nums[j];
        //         if((long long)nums[i]>f)
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;
        return mergesort(nums,0,nums.size()-1);


    }
};