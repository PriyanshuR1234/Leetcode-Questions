class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(char c:ransomNote){
            if (!magazine.contains(c))
            {
                return false;
            }
            else magazine.erase(magazine.find(c),1);
        }

        return true;
    }
};