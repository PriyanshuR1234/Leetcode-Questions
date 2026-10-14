class Solution {
public:
// string a="";
//     int summe(string ans)
//     {
//         int sum=0;
//         for(char c:ans)
//         {
//             sum+=c-'0';
//         }
//         return sum;
//     }
//     void recurse(int num,int sum ,string ans,int idx)
//     {
//         if(idx>9) return;
//         if(ans.size()>num)return;
//         int ss=summe(ans);
//         if(ss>sum)return;

//         if(ans.size()==num && ss==sum)
//         {
//             a=ans;
//             return;
//         }

//         recurse(num,sum,ans+to_string(idx),idx+1);
//         recurse(num,sum,ans,idx+1);
//     }
    string maxSumOfSquares(int num, int sum) {
        // string ans="";
        // recurse(num,sum,ans,0);
        // return a;
       
       string s="";
        if(sum>num*9) return "";
        

        
        while(sum>=9)
        {
            s+=to_string(9);
            sum-=9;
        }

        if(sum>0)
        {
            s+=to_string(sum);
        }
       while(s.size()<num)
       {
            s+='0';
       }
       return s;


        
    }
};