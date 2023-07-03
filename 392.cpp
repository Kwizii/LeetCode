//
// Created by ChanvoBook on 2023/6/30.
//
#include "iostream"
#include "queue"
#include "stack"
#include "vector"
#include "algorithm"
#include "cstring"
#include "cmath"
#include "set"
#include "map"
#include "numeric"
#include "unordered_set"
#include "unordered_map"

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        map<char, vector<int>> idx_map;
        for (int i = 0; i < t.size(); ++i) {
            idx_map[t[i]].push_back(i);
        }
        int prev = -1;
        bool found;
        for (int i = 0; i < s.size(); ++i) {
            if (idx_map[s[i]].empty())
                return false;
            vector<int> &idxes = idx_map[s[i]];
            found = false;
            for (const auto &idx: idxes) {
                if (idx > prev) {
                    prev = idx;
                    found = true;
                    break;
                }
            }
            if (found) {
                idxes.erase(idxes.begin());
            } else {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution().isSubsequence("abc", "ahbgdc");
    return 0;
}