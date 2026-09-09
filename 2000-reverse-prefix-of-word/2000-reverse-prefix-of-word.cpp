class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count=0;
        bool flag=false;
        for(char i:word)
        {
            count++;
            if(i==ch)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        reverse(word.begin(),word.begin()+count);
        
        return word;
    }
};