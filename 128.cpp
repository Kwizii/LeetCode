//
// Created by ChanvoBook on 2023/6/10.
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
    int longestConsecutive(vector<int> &nums) {
        unordered_set<int> numset(nums.begin(), nums.end());
        int maxLen = 0;
        for (const auto &n: numset) {
            if (!numset.count(n - 1)) {
                int curLen = 1;
                while (numset.count(n + curLen))
                    ++curLen;
                maxLen = max(maxLen, curLen);
            }
        }
        return maxLen;
    }
};

int main() {
    vector<int> x = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    Solution().longestConsecutive(x);
    return 0;
}