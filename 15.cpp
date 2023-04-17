//
// Created by ChanvoBook on 2023/4/16.
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
    vector<vector<int>> threeSum(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); ++i) {
            int k = nums.size() - 1;
            int tgt = -nums[i];
            if (i == 0 || nums[i] != nums[i - 1]) {
                for (int j = i + 1; j < nums.size(); ++j) {
                    if (j == i + 1 || nums[j] != nums[j - 1]) {
                        while (k > j && nums[j] + nums[k] > tgt)
                            k--;
                        if (j == k)
                            break;
                        if (nums[j] + nums[k] == tgt)
                            ans.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        return ans;
    }
};

int main() {

    return 0;
}