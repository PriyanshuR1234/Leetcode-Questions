class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string s="";
        while(i>=0 || j>=0 || carry)
        {
            int sum=carry;
            if(i>=0)
            {
                sum+=a[i]-'0';
                i--;
            }

            if(j>=0)
            {
                sum+=b[j]-'0';
                j--;
            }

            s+=to_string(sum%2);

            carry=sum/2;

        }
        reverse(s.begin(),s.end());
        return s;
    }
};