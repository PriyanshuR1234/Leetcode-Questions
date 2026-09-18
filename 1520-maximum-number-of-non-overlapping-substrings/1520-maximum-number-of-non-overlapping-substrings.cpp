class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        // unordered_map<char,int>m;
        // int count=0;
        // vector<string>ans;
        // for(char c:s)
        // {
        //     m[c]++;
        // }

        // for(int i=0;i<s.size();i++)
        // {
            
        //     int curr=1;
        //     if(m[s[i]]==1)
        //     {
        //         count++;
        //         ans.push_back(string(1, s[i]));
        //     }
        //     else
        //     {
        //         int j=i+1;
        //         string str=string(1,s[i]);
        //         while(s[j]==s[i])
        //         {
        //             str+=s[j];
        //             curr++;
        //             j++;
        //         }
        //         if(curr==m[s[i]])
        //         {
        //             ans.push_back(str);
        //             count++;
        //         }

        //     }
        // }
        // cout<< count;
        // return ans;

        ///////////////////////////////////////////////////---------------////////

         int n = s.size();
        vector<int> start(26, -1);
        vector<int> end(26, -1);
        vector<bool> isvalid(26, true);

        vector<string> result;

        // Fix 1 & 2: Corrected '-' typo and fixed first-occurrence initialization logic
        for(int i = 0; i < s.size(); i++) {
            int idx = s[i] - 'a'; 
            if(start[idx] == -1) { 
                start[idx] = i;
            }
            end[idx] = i;
        }

        for(int i = 0; i < 26; i++) {
            if(start[i] == -1) continue;

            for(int c = start[i]; c <= end[i]; c++) {
                if(start[s[c] - 'a'] < start[i]) {
                    // Fix 3: Invalidate the character 'i', not the string index 'c'
                    isvalid[i] = false; 
                    break; 
                }
                end[i] = max(end[i], end[s[c] - 'a']);
            }
        }

        // Your greedy right-to-left collection logic works perfectly!
        int last = INT_MAX;
        for(int i = n - 1; i >= 0; i--) {
            int c = s[i] - 'a';
            if(!isvalid[c]) continue;
            
            if(i == start[c] && end[c] < last) {
                result.push_back(s.substr(i, end[c] - i + 1));
                last = i;
            }
        }
        return result;

    }
};