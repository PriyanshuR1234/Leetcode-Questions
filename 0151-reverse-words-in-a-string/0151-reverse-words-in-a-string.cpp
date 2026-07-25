class Solution {
public:
    string reverseWords(string s) {
          stringstream ss(s);
        string word;
        vector<string> words;
        
        // Extract words, automatically ignoring extra spaces
        while (ss >> word) {
            words.push_back(word);
        }
        
        string result = "";
        // Reconstruct the string in reverse order
        for (int i = words.size() - 1; i >= 0; --i) {
            result += words[i];
            if (i > 0) {
                result += " "; // Add space between words
            }
        }
        
        return result;
    }
};