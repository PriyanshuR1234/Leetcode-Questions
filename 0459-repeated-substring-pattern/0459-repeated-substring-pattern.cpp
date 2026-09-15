class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       string ss=s+s;
       string mid=ss.substr(1,ss.size()-2);
       return mid.contains(s);
    }
};