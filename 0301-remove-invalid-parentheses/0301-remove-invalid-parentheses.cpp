#include <string>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool validate(string str) {
        int count = 0;
        for (char c : str) {
            if (c == '(') {
                count++;
            } else if (c == ')') {
                count--;
            }
            if (count < 0) {
                return false;
            }
        }
        return count == 0;
    }

    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        if (s.empty()) return {""};

        queue<string> q;
        unordered_set<string> visited;

        q.push(s);
        visited.insert(s);

        bool found_valid_level = false;

        while (!q.empty()) {
            string current = q.front();
            q.pop();

            if (validate(current)) {
                ans.push_back(current);
                found_valid_level = true;
            }

            // If we found valid strings at this depth level, 
            // do not generate deeper states (stop expanding).
            if (found_valid_level) {
                continue;
            }

            for (int i = 0; i < current.size(); i++) {
                // Only try to remove parentheses characters
                if (current[i] != '(' && current[i] != ')') {
                    continue;
                }

                // Generate a new candidate string by removing current[i]
                string next_state = current.substr(0, i) + current.substr(i + 1);

                if (visited.find(next_state) == visited.end()) {
                    q.push(next_state);
                    visited.insert(next_state);
                }
            }
        }

        return ans;
    }
};
