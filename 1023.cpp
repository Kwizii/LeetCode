//
// Created by ChanvoBook on 2023/4/14.
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
    bool isLower(const char &c) {
        return c >= 'a' && c <= 'z';
    }

    vector<bool> camelMatch(vector<string> &queries, string pattern) {
        vector<bool> ans;
        for (const auto &query: queries) {
            int i = 0, j = 0;
            bool res = true;
            while (i < query.size() && j < pattern.size()) {
                if (query[i] == pattern[j]) {
                    i++;
                    j++;
                } else if (isLower(query[i])) {
                    i++;
                } else {
                    res = false;
                    break;
                }
            }
            if (res) {
                if (j == pattern.size()) {
                    while (i < query.size()) {
                        if (!isLower(query[i++])) {
                            res = false;
                            break;
                        }
                    }
                } else res = false;
            }
            ans.emplace_back(res);
        }
        return ans;
    }
};

int main() {
    vector<string> q{"FooBar", "FooBarTest", "FootBall", "FrameBuffer", "ForceFeedBack"};
    Solution().camelMatch(q, "FB");
    return 0;
}