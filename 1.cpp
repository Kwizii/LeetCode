//
// Created by ChanvoBook on 2023/4/12.
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
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); ++i) {
            if (umap.count(target - nums[i]))
                return {umap[target - nums[i]], i};
            umap[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    unordered_map<int, int> umap;
    return 0;
}