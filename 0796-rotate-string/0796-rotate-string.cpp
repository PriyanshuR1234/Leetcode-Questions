class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())return false;
        string ss=s+s;
        return ss.contains(goal);
    }
};