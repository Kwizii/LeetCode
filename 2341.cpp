//
// Created by Chanvo on 2023/2/16.
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

using namespace std;

class Solution {
public:
    vector<int> numberOfPairs(vector<int> &nums) {
        unordered_map<int, int> umap;
        vector<int> ans(2);
        for (auto &num: nums) {
            umap[num]++;
        }
        for (auto &[_, v]: umap) {
            ans[0] += v / 2;
            ans[1] += v % 2;
        }
        return ans;
    }
};

int main() {
    vector<int> x = {1, 3, 2, 1, 3, 2, 2};
    Solution().numberOfPairs(x);
    return 0;
}