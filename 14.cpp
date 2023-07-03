//
// Created by ChanvoBook on 2023/7/1.
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
    string longestCommonPrefix(vector<string> &strs) {
        int min_len = 200;
        for (const auto &str: strs) {
            min_len = min((int) str.size(), min_len);
        }
        string prefix = "";
        while (prefix.size() < min_len) {
            prefix += strs[0][prefix.size()];
            bool found = true;
            for (int i = 1; i < strs.size(); ++i) {
                if (strs[i][prefix.size() - 1] != prefix.back()) {
                    found = false;
                    break;
                }
            }
            if (!found) {
                prefix.erase(prefix.end() - 1);
                break;
            }
        }
        return prefix;
    }
};

int main() {
    vector<string> x = {"flower", "flow", "flight"};
    cout << Solution().longestCommonPrefix(x);
    return 0;
}