//
// Created by ChanvoBook on 2023/7/2.
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
    int pivotIndex(vector<int> &nums) {
        int l = 0, r = 0;
        for (const auto &num: nums)
            r += num;
        for (int i = 0; i < nums.size(); ++i) {
            if (l == r - nums[i])
                return i;
            l += nums[i];
            r -= nums[i];
        }
        return -1;
    }
};

int main() {

    return 0;
}