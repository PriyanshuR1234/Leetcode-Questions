#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        map<int, int> freq;
        for (int i : digits) {
            freq[i]++;
        }

        int out = 0;

        for (auto& p1 : freq) {
            int h = p1.first;
            if (h == 0 || p1.second <= 0) continue;
            freq[h]--;

            for (auto& p2 : freq) {
                int t = p2.first;
                if (p2.second <= 0) continue;
                freq[t]--;

                for (auto& p3 : freq) {
                    int u = p3.first;
                    if (u % 2 == 0 && p3.second > 0) {
                        out++;
                    }
                }

                freq[t]++;
            }

            freq[h]++;
        }

        return out;
    }
};
