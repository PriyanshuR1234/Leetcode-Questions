class Solution { 
public: 
    string longestCommonPrefix(vector<string>& strs) { 
        // Edge case: if the input vector is empty, return an empty string
        if (strs.empty()) return "";
        
        string prefix = strs[0]; 
        
        for (int i = 1; i < strs.size(); i++) { 
            // find(prefix) != 0 means prefix is not found at the very beginning of strs[i]
            while (strs[i].find(prefix) != 0) { 
                // Shorten the prefix by removing its last character
                prefix = prefix.substr(0, prefix.length() - 1); 
                
                // If prefix becomes empty, there is no common prefix
                if (prefix.empty()) return ""; 
            } 
        } 
        return prefix;
    } 
};
